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

#include <osg/Timer>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_VALUE_REFLECTOR(osg::ElapsedTime)
	I_DeclaringFile("osg/Timer");
	I_ConstructorWithDefaults2(IN, double *, elapsedTime, , IN, osg::Timer *, timer, 0,
	                           ____ElapsedTime__double_P1__osg_Timer_P1,
	                           "",
	                           "");
	I_ConstructorWithDefaults1(IN, osg::Timer *, timer, 0,
	                           Properties::NON_EXPLICIT,
	                           ____ElapsedTime__osg_Timer_P1,
	                           "",
	                           "");
	I_Method0(void, reset,
	          Properties::NON_VIRTUAL,
	          __void__reset,
	          "",
	          "");
	I_Method0(double, elapsedTime,
	          Properties::NON_VIRTUAL,
	          __double__elapsedTime,
	          "elapsed time in seconds. ",
	          "");
	I_Method0(double, elapsedTime_m,
	          Properties::NON_VIRTUAL,
	          __double__elapsedTime_m,
	          "elapsed time in milliseconds. ",
	          "");
	I_Method0(double, elapsedTime_u,
	          Properties::NON_VIRTUAL,
	          __double__elapsedTime_u,
	          "elapsed time in microseconds. ",
	          "");
	I_Method0(double, elapsedTime_n,
	          Properties::NON_VIRTUAL,
	          __double__elapsedTime_n,
	          "elapsed time in nanoseconds. ",
	          "");
	I_Method0(void, finish,
	          Properties::NON_VIRTUAL,
	          __void__finish,
	          "",
	          "");
	I_ProtectedMethod1(void, init, IN, osg::Timer *, timer,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__init__osg_Timer_P1,
	                   "",
	                   "");
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::Timer)
	I_DeclaringFile("osg/Timer");
	I_Constructor0(____Timer,
	               "",
	               "");
	I_Method0(osg::Timer_t, tick,
	          Properties::NON_VIRTUAL,
	          __Timer_t__tick,
	          "Get the timers tick value. ",
	          "");
	I_Method0(void, setStartTick,
	          Properties::NON_VIRTUAL,
	          __void__setStartTick,
	          "Set the start. ",
	          "");
	I_Method1(void, setStartTick, IN, osg::Timer_t, t,
	          Properties::NON_VIRTUAL,
	          __void__setStartTick__Timer_t,
	          "",
	          "");
	I_Method0(osg::Timer_t, getStartTick,
	          Properties::NON_VIRTUAL,
	          __Timer_t__getStartTick,
	          "",
	          "");
	I_Method0(double, time_s,
	          Properties::NON_VIRTUAL,
	          __double__time_s,
	          "Get elapsed time in seconds. ",
	          "");
	I_Method0(double, time_m,
	          Properties::NON_VIRTUAL,
	          __double__time_m,
	          "Get elapsed time in milliseconds. ",
	          "");
	I_Method0(double, time_u,
	          Properties::NON_VIRTUAL,
	          __double__time_u,
	          "Get elapsed time in micoseconds. ",
	          "");
	I_Method0(double, time_n,
	          Properties::NON_VIRTUAL,
	          __double__time_n,
	          "Get elapsed time in nanoseconds. ",
	          "");
	I_Method2(double, delta_s, IN, osg::Timer_t, t1, IN, osg::Timer_t, t2,
	          Properties::NON_VIRTUAL,
	          __double__delta_s__Timer_t__Timer_t,
	          "Get the time in seconds between timer ticks t1 and t2. ",
	          "");
	I_Method2(double, delta_m, IN, osg::Timer_t, t1, IN, osg::Timer_t, t2,
	          Properties::NON_VIRTUAL,
	          __double__delta_m__Timer_t__Timer_t,
	          "Get the time in milliseconds between timer ticks t1 and t2. ",
	          "");
	I_Method2(double, delta_u, IN, osg::Timer_t, t1, IN, osg::Timer_t, t2,
	          Properties::NON_VIRTUAL,
	          __double__delta_u__Timer_t__Timer_t,
	          "Get the time in microseconds between timer ticks t1 and t2. ",
	          "");
	I_Method2(double, delta_n, IN, osg::Timer_t, t1, IN, osg::Timer_t, t2,
	          Properties::NON_VIRTUAL,
	          __double__delta_n__Timer_t__Timer_t,
	          "Get the time in nanoseconds between timer ticks t1 and t2. ",
	          "");
	I_Method0(double, getSecondsPerTick,
	          Properties::NON_VIRTUAL,
	          __double__getSecondsPerTick,
	          "Get the the number of seconds per tick. ",
	          "");
	I_StaticMethod0(osg::Timer *, instance,
	                __Timer_P1__instance_S,
	                "",
	                "");
	I_SimpleProperty(double, SecondsPerTick, 
	                 __double__getSecondsPerTick, 
	                 0);
	I_SimpleProperty(osg::Timer_t, StartTick, 
	                 __Timer_t__getStartTick, 
	                 __void__setStartTick__Timer_t);
END_REFLECTOR

TYPE_NAME_ALIAS(unsigned long long, osg::Timer_t)

