#undef OBJECT_CAST
#define OBJECT_CAST dynamic_cast

#include <osgAnimation/UpdateMatrixTransform>
#include <osgDB/ObjectWrapper>
#include <osgDB/InputStream>
#include <osgDB/OutputStream>

static bool checkStackedTransforms( const osgAnimation::UpdateMatrixTransform& obj )
{
    return obj.getStackedTransforms().size()>0;
}

static bool readStackedTransforms( osgDB::InputStream& is, osgAnimation::UpdateMatrixTransform& obj )
{
    osgAnimation::StackedTransform& transform = obj.getStackedTransforms();
    unsigned int size = is.readSize(); is >> osgDB::BEGIN_BRACKET;
    for ( unsigned int i=0; i<size; ++i )
    {
        osgAnimation::StackedTransformElement* element =
            dynamic_cast<osgAnimation::StackedTransformElement*>( is.readObject() );
        if ( element ) transform.push_back( element );
    }
    is >> osgDB::END_BRACKET;
    return true;
}

static bool writeStackedTransforms( osgDB::OutputStream& os, const osgAnimation::UpdateMatrixTransform& obj )
{
    const osgAnimation::StackedTransform& transform = obj.getStackedTransforms();
    os.writeSize(transform.size()); os << osgDB::BEGIN_BRACKET << std::endl;
    for ( osgAnimation::StackedTransform::const_iterator itr=transform.begin();
          itr!=transform.end(); ++itr )
    {
        os << itr->get();
    }
    os << osgDB::END_BRACKET << std::endl;
    return true;
}

REGISTER_OBJECT_WRAPPER( osgAnimation_UpdateMatrixTransform,
                         new osgAnimation::UpdateMatrixTransform,
                         osgAnimation::UpdateMatrixTransform,
                         "osg::Object osg::NodeCallback osgAnimation::UpdateMatrixTransform" )
{
    ADD_USER_SERIALIZER( StackedTransforms );  // _transforms
}

#undef OBJECT_CAST
#define OBJECT_CAST static_cast
