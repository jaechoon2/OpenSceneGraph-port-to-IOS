/**********************************************************************
 *
 *    FILE:            Sequence.cpp
 *
 *    DESCRIPTION:    Read/Write osg::Sequence in binary format to disk.
 *
 *    CREATED BY:        Auto generated by iveGenerate
 *                    and later modified by Rune Schmidt Jensen.
 *
 *    HISTORY:        Created 24.3.2003
 *
 *    Copyright 2003 VR-C
 **********************************************************************/

#include "Exception.h"
#include "Sequence.h"
#include "Group.h"

using namespace ive;

void Sequence::write(DataOutputStream* out)
{
    // Write Sequence's identification.
    out->writeInt(IVESEQUENCE);
    // If the osg class is inherited by any other class we should also write this to file.
    osg::Group*  group = dynamic_cast<osg::Group*>(this);
    if(group)
    {
        ((ive::Group*)(group))->write(out);
    }
    else
    {
        out_THROW_EXCEPTION("Sequence::write(): Could not cast this osg::Sequence to an osg::Group.");
    }

    // Write Sequence's properties.

    if (out->getVersion() >= VERSION_0022)
    {
        // Write default frame time
        out->writeFloat(getDefaultTime()) ;
    }

    // Write frame times.
    int size = getNumChildren();
    out->writeInt(size);
    for(int i=0;i<size;i++)
    {
        out->writeFloat(getTime(i));
    }
    
    if (out->getVersion() >= VERSION_0022)
    {
        // Write last frame time
        out->writeFloat(getLastFrameTime()) ;
    }

    // Write loop mode & interval
    osg::Sequence::LoopMode mode;
    int begin, end;
    getInterval(mode, begin, end);
    out->writeInt(mode);
    out->writeInt(begin);
    out->writeInt(end);

    // Write duration
    float speed;
    int nreps;
    getDuration(speed, nreps);
    out->writeFloat(speed);
    out->writeInt(nreps);

    // Write sequence mode
    out->writeInt(getMode());

    if (out->getVersion() >= VERSION_0022)
    {
        // Write sync as an integer
        out->writeInt((int)getSync()) ;

        // Write clearOnStop as an integer
        out->writeInt((int)getClearOnStop()) ;
    }

}

void Sequence::read(DataInputStream* in)
{
    // Peek on Sequence's identification.
    int id = in->peekInt();
    if(id == IVESEQUENCE)
    {
        // Read Sequence's identification.
        id = in->readInt();
        // If the osg class is inherited by any other class we should also read this from file.
        osg::Group*  group = dynamic_cast<osg::Group*>(this);
        if(group)
        {
            ((ive::Group*)(group))->read(in);
        }
        else
        {
            in_THROW_EXCEPTION("Sequence::read(): Could not cast this osg::Sequence to an osg::Group.");
        }

        // Read Sequence's properties

        if (in->getVersion() >= VERSION_0022)
        {
            // Read default frame time
            setDefaultTime(in->readFloat());
        }

        // Read frame times.
        int size = in->readInt();
        for(int i=0;i<size;i++)
        {
            setTime(i, in->readFloat());
        }
    
        if (in->getVersion() >= VERSION_0022)
        {
            // Read last frame time
            setLastFrameTime(in->readFloat());
        }

        // Read loop mode & interval
        int mode = in->readInt();
        int begin = in->readInt();
        int end = in->readInt();
        setInterval((osg::Sequence::LoopMode)mode, begin, end);

        // Read duration
        float speed = in->readFloat();
        int nreps = in->readInt();
        setDuration(speed, nreps);

        // Read sequence mode
        setMode((osg::Sequence::SequenceMode)in->readInt());

        if (in->getVersion() >= VERSION_0022)
        {
            // Read sync from an integer
            setSync((in->readInt())!=0) ;

            // Read clearOnStop from an integer
            setClearOnStop((in->readInt())!=0) ;
        }
    }
    else
    {
        in_THROW_EXCEPTION("Sequence::read(): Expected Sequence identification.");
    }
}