// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/Object>
#include <osgAnimation/Animation>
#include <osgAnimation/Channel>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osgAnimation::Animation::PlayMode)
	I_DeclaringFile("osgAnimation/Animation");
	I_EnumLabel(osgAnimation::Animation::ONCE);
	I_EnumLabel(osgAnimation::Animation::STAY);
	I_EnumLabel(osgAnimation::Animation::LOOP);
	I_EnumLabel(osgAnimation::Animation::PPONG);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::Animation)
	I_DeclaringFile("osgAnimation/Animation");
	I_BaseType(osg::Object);
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Constructor0(____Animation,
	               "",
	               "");
	I_Constructor2(IN, const osgAnimation::Animation &, x, IN, const osg::CopyOp &, x,
	               ____Animation__C5_osgAnimation_Animation_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_Method1(void, addChannel, IN, osgAnimation::Channel *, pChannel,
	          Properties::NON_VIRTUAL,
	          __void__addChannel__Channel_P1,
	          "",
	          "");
	I_Method0(osgAnimation::ChannelList &, getChannels,
	          Properties::NON_VIRTUAL,
	          __ChannelList_R1__getChannels,
	          "Those accessors let you add and remove channels if you modify something that can change the duration you are supposed to call computeDuration or setDuration. ",
	          "");
	I_Method0(const osgAnimation::ChannelList &, getChannels,
	          Properties::NON_VIRTUAL,
	          __C5_ChannelList_R1__getChannels,
	          "",
	          "");
	I_Method1(void, setDuration, IN, double, duration,
	          Properties::NON_VIRTUAL,
	          __void__setDuration__double,
	          "Change the duration of animation then evaluate the animation in the range 0-duration it stretch the animation in time. ",
	          "see computeDuration too ");
	I_Method0(void, computeDuration,
	          Properties::NON_VIRTUAL,
	          __void__computeDuration,
	          "Compute duration from channel and keyframes if the duration is not specified you should call this method before using it. ",
	          "");
	I_Method0(double, getDuration,
	          Properties::NON_VIRTUAL,
	          __double__getDuration,
	          "",
	          "");
	I_Method1(void, setWeight, IN, float, weight,
	          Properties::NON_VIRTUAL,
	          __void__setWeight__float,
	          "",
	          "");
	I_Method0(float, getWeight,
	          Properties::NON_VIRTUAL,
	          __float__getWeight,
	          "",
	          "");
	I_MethodWithDefaults2(bool, update, IN, double, time, , IN, int, priority, 0,
	                      Properties::NON_VIRTUAL,
	                      __bool__update__double__int,
	                      "",
	                      "");
	I_Method0(void, resetTargets,
	          Properties::NON_VIRTUAL,
	          __void__resetTargets,
	          "",
	          "");
	I_Method1(void, setPlayMode, IN, osgAnimation::Animation::PlayMode, mode,
	          Properties::NON_VIRTUAL,
	          __void__setPlayMode__PlayMode,
	          "",
	          "");
	I_Method0(osgAnimation::Animation::PlayMode, getPlayMode,
	          Properties::NON_VIRTUAL,
	          __PlayMode__getPlayMode,
	          "",
	          "");
	I_Method1(void, setStartTime, IN, double, time,
	          Properties::NON_VIRTUAL,
	          __void__setStartTime__double,
	          "",
	          "");
	I_Method0(double, getStartTime,
	          Properties::NON_VIRTUAL,
	          __double__getStartTime,
	          "",
	          "");
	I_ProtectedMethod0(double, computeDurationFromChannels,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __double__computeDurationFromChannels,
	                   "",
	                   "");
	I_SimpleProperty(osgAnimation::ChannelList &, Channels, 
	                 __ChannelList_R1__getChannels, 
	                 0);
	I_SimpleProperty(double, Duration, 
	                 __double__getDuration, 
	                 __void__setDuration__double);
	I_SimpleProperty(osgAnimation::Animation::PlayMode, PlayMode, 
	                 __PlayMode__getPlayMode, 
	                 __void__setPlayMode__PlayMode);
	I_SimpleProperty(double, StartTime, 
	                 __double__getStartTime, 
	                 __void__setStartTime__double);
	I_SimpleProperty(float, Weight, 
	                 __float__getWeight, 
	                 __void__setWeight__float);
END_REFLECTOR

TYPE_NAME_ALIAS(std::vector< osg::ref_ptr< osgAnimation::Animation > >, osgAnimation::AnimationList)

TYPE_NAME_ALIAS(std::map< std::string COMMA  osg::ref_ptr< osgAnimation::Animation > >, osgAnimation::AnimationMap)

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgAnimation::Animation >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgAnimation::Animation *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgAnimation::Animation > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgAnimation::Animation *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgAnimation::Animation *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgAnimation::Animation > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgAnimation::Animation *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_MAP_REFLECTOR(std::map< std::string COMMA  osg::ref_ptr< osgAnimation::Animation > >)

STD_VECTOR_REFLECTOR(std::vector< osg::ref_ptr< osgAnimation::Animation > >)

