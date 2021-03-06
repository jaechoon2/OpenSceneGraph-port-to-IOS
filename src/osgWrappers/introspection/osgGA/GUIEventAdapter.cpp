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
#include <osg/GraphicsContext>
#include <osg/Matrix>
#include <osg/Object>
#include <osgGA/GUIEventAdapter>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osgGA::GUIEventAdapter::MouseButtonMask)
	I_DeclaringFile("osgGA/GUIEventAdapter");
	I_EnumLabel(osgGA::GUIEventAdapter::LEFT_MOUSE_BUTTON);
	I_EnumLabel(osgGA::GUIEventAdapter::MIDDLE_MOUSE_BUTTON);
	I_EnumLabel(osgGA::GUIEventAdapter::RIGHT_MOUSE_BUTTON);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgGA::GUIEventAdapter::EventType)
	I_DeclaringFile("osgGA/GUIEventAdapter");
	I_EnumLabel(osgGA::GUIEventAdapter::NONE);
	I_EnumLabel(osgGA::GUIEventAdapter::PUSH);
	I_EnumLabel(osgGA::GUIEventAdapter::RELEASE);
	I_EnumLabel(osgGA::GUIEventAdapter::DOUBLECLICK);
	I_EnumLabel(osgGA::GUIEventAdapter::DRAG);
	I_EnumLabel(osgGA::GUIEventAdapter::MOVE);
	I_EnumLabel(osgGA::GUIEventAdapter::KEYDOWN);
	I_EnumLabel(osgGA::GUIEventAdapter::KEYUP);
	I_EnumLabel(osgGA::GUIEventAdapter::FRAME);
	I_EnumLabel(osgGA::GUIEventAdapter::RESIZE);
	I_EnumLabel(osgGA::GUIEventAdapter::SCROLL);
	I_EnumLabel(osgGA::GUIEventAdapter::PEN_PRESSURE);
	I_EnumLabel(osgGA::GUIEventAdapter::PEN_ORIENTATION);
	I_EnumLabel(osgGA::GUIEventAdapter::PEN_PROXIMITY_ENTER);
	I_EnumLabel(osgGA::GUIEventAdapter::PEN_PROXIMITY_LEAVE);
	I_EnumLabel(osgGA::GUIEventAdapter::CLOSE_WINDOW);
	I_EnumLabel(osgGA::GUIEventAdapter::QUIT_APPLICATION);
	I_EnumLabel(osgGA::GUIEventAdapter::USER);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgGA::GUIEventAdapter::KeySymbol)
	I_DeclaringFile("osgGA/GUIEventAdapter");
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Space);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_BackSpace);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Tab);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Linefeed);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Clear);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Return);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Pause);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Scroll_Lock);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Sys_Req);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Escape);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Delete);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Home);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Left);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Up);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Right);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Down);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Prior);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Page_Up);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Next);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Page_Down);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_End);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Begin);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Select);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Print);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Execute);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Insert);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Undo);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Redo);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Menu);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Find);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Cancel);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Help);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Break);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Mode_switch);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Script_switch);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Num_Lock);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_Space);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_Tab);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_Enter);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_F1);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_F2);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_F3);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_F4);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_Home);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_Left);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_Up);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_Right);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_Down);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_Prior);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_Page_Up);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_Next);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_Page_Down);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_End);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_Begin);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_Insert);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_Delete);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_Equal);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_Multiply);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_Add);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_Separator);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_Subtract);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_Decimal);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_Divide);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_0);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_1);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_2);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_3);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_4);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_5);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_6);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_7);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_8);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_KP_9);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F1);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F2);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F3);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F4);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F5);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F6);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F7);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F8);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F9);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F10);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F11);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F12);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F13);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F14);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F15);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F16);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F17);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F18);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F19);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F20);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F21);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F22);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F23);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F24);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F25);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F26);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F27);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F28);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F29);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F30);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F31);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F32);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F33);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F34);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_F35);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Shift_L);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Shift_R);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Control_L);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Control_R);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Caps_Lock);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Shift_Lock);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Meta_L);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Meta_R);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Alt_L);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Alt_R);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Super_L);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Super_R);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Hyper_L);
	I_EnumLabel(osgGA::GUIEventAdapter::KEY_Hyper_R);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgGA::GUIEventAdapter::ModKeyMask)
	I_DeclaringFile("osgGA/GUIEventAdapter");
	I_EnumLabel(osgGA::GUIEventAdapter::MODKEY_LEFT_SHIFT);
	I_EnumLabel(osgGA::GUIEventAdapter::MODKEY_RIGHT_SHIFT);
	I_EnumLabel(osgGA::GUIEventAdapter::MODKEY_LEFT_CTRL);
	I_EnumLabel(osgGA::GUIEventAdapter::MODKEY_RIGHT_CTRL);
	I_EnumLabel(osgGA::GUIEventAdapter::MODKEY_LEFT_ALT);
	I_EnumLabel(osgGA::GUIEventAdapter::MODKEY_RIGHT_ALT);
	I_EnumLabel(osgGA::GUIEventAdapter::MODKEY_LEFT_META);
	I_EnumLabel(osgGA::GUIEventAdapter::MODKEY_RIGHT_META);
	I_EnumLabel(osgGA::GUIEventAdapter::MODKEY_LEFT_SUPER);
	I_EnumLabel(osgGA::GUIEventAdapter::MODKEY_RIGHT_SUPER);
	I_EnumLabel(osgGA::GUIEventAdapter::MODKEY_LEFT_HYPER);
	I_EnumLabel(osgGA::GUIEventAdapter::MODKEY_RIGHT_HYPER);
	I_EnumLabel(osgGA::GUIEventAdapter::MODKEY_NUM_LOCK);
	I_EnumLabel(osgGA::GUIEventAdapter::MODKEY_CAPS_LOCK);
	I_EnumLabel(osgGA::GUIEventAdapter::MODKEY_CTRL);
	I_EnumLabel(osgGA::GUIEventAdapter::MODKEY_SHIFT);
	I_EnumLabel(osgGA::GUIEventAdapter::MODKEY_ALT);
	I_EnumLabel(osgGA::GUIEventAdapter::MODKEY_META);
	I_EnumLabel(osgGA::GUIEventAdapter::MODKEY_SUPER);
	I_EnumLabel(osgGA::GUIEventAdapter::MODKEY_HYPER);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgGA::GUIEventAdapter::MouseYOrientation)
	I_DeclaringFile("osgGA/GUIEventAdapter");
	I_EnumLabel(osgGA::GUIEventAdapter::Y_INCREASING_UPWARDS);
	I_EnumLabel(osgGA::GUIEventAdapter::Y_INCREASING_DOWNWARDS);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgGA::GUIEventAdapter::ScrollingMotion)
	I_DeclaringFile("osgGA/GUIEventAdapter");
	I_EnumLabel(osgGA::GUIEventAdapter::SCROLL_NONE);
	I_EnumLabel(osgGA::GUIEventAdapter::SCROLL_LEFT);
	I_EnumLabel(osgGA::GUIEventAdapter::SCROLL_RIGHT);
	I_EnumLabel(osgGA::GUIEventAdapter::SCROLL_UP);
	I_EnumLabel(osgGA::GUIEventAdapter::SCROLL_DOWN);
	I_EnumLabel(osgGA::GUIEventAdapter::SCROLL_2D);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgGA::GUIEventAdapter::TabletPointerType)
	I_DeclaringFile("osgGA/GUIEventAdapter");
	I_EnumLabel(osgGA::GUIEventAdapter::UNKNOWN);
	I_EnumLabel(osgGA::GUIEventAdapter::PEN);
	I_EnumLabel(osgGA::GUIEventAdapter::PUCK);
	I_EnumLabel(osgGA::GUIEventAdapter::ERASER);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgGA::GUIEventAdapter)
	I_DeclaringFile("osgGA/GUIEventAdapter");
	I_BaseType(osg::Object);
	I_Constructor0(____GUIEventAdapter,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgGA::GUIEventAdapter &, rhs, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____GUIEventAdapter__C5_GUIEventAdapter_R1__C5_osg_CopyOp_R1,
	                           "",
	                           "");
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
	I_Method1(void, setHandled, IN, bool, handled,
	          Properties::NON_VIRTUAL,
	          __void__setHandled__bool,
	          "Set whether this event has been handled by an event handler or not. ",
	          "");
	I_Method0(bool, getHandled,
	          Properties::NON_VIRTUAL,
	          __bool__getHandled,
	          "Get whether this event has been handled by an event handler or not. ",
	          "");
	I_Method1(void, setEventType, IN, osgGA::GUIEventAdapter::EventType, Type,
	          Properties::NON_VIRTUAL,
	          __void__setEventType__EventType,
	          "set the event type. ",
	          "");
	I_Method0(osgGA::GUIEventAdapter::EventType, getEventType,
	          Properties::VIRTUAL,
	          __EventType__getEventType,
	          "get the event type. ",
	          "");
	I_Method1(void, setTime, IN, double, time,
	          Properties::NON_VIRTUAL,
	          __void__setTime__double,
	          "set time in seconds of event. ",
	          "");
	I_Method0(double, getTime,
	          Properties::NON_VIRTUAL,
	          __double__getTime,
	          "get time in seconds of event. ",
	          "");
	I_Method0(double, time,
	          Properties::NON_VIRTUAL,
	          __double__time,
	          "deprecated function for getting time of event. ",
	          "");
	I_Method1(void, setGraphicsContext, IN, osg::GraphicsContext *, context,
	          Properties::NON_VIRTUAL,
	          __void__setGraphicsContext__osg_GraphicsContext_P1,
	          "",
	          "");
	I_Method0(const osg::GraphicsContext *, getGraphicsContext,
	          Properties::NON_VIRTUAL,
	          __C5_osg_GraphicsContext_P1__getGraphicsContext,
	          "",
	          "");
	I_MethodWithDefaults5(void, setWindowRectangle, IN, int, x, , IN, int, y, , IN, int, width, , IN, int, height, , IN, bool, updateMouseRange, true,
	                      Properties::NON_VIRTUAL,
	                      __void__setWindowRectangle__int__int__int__int__bool,
	                      "set window rectangle. ",
	                      "");
	I_Method0(int, getWindowX,
	          Properties::NON_VIRTUAL,
	          __int__getWindowX,
	          "get window x origin. ",
	          "");
	I_Method0(int, getWindowY,
	          Properties::NON_VIRTUAL,
	          __int__getWindowY,
	          "get window y origin. ",
	          "");
	I_Method0(int, getWindowWidth,
	          Properties::NON_VIRTUAL,
	          __int__getWindowWidth,
	          "get window width. ",
	          "");
	I_Method0(int, getWindowHeight,
	          Properties::NON_VIRTUAL,
	          __int__getWindowHeight,
	          "get window height. ",
	          "");
	I_Method1(void, setKey, IN, int, key,
	          Properties::NON_VIRTUAL,
	          __void__setKey__int,
	          "set key pressed. ",
	          "");
	I_Method0(int, getKey,
	          Properties::VIRTUAL,
	          __int__getKey,
	          "get key pressed, return -1 if inappropriate for this GUIEventAdapter. ",
	          "");
	I_Method1(void, setButton, IN, int, button,
	          Properties::NON_VIRTUAL,
	          __void__setButton__int,
	          "set button pressed/released. ",
	          "");
	I_Method0(int, getButton,
	          Properties::NON_VIRTUAL,
	          __int__getButton,
	          "button pressed/released, return -1 if inappropriate for this GUIEventAdapter. ",
	          "");
	I_Method4(void, setInputRange, IN, float, Xmin, IN, float, Ymin, IN, float, Xmax, IN, float, Ymax,
	          Properties::NON_VIRTUAL,
	          __void__setInputRange__float__float__float__float,
	          "set mouse input range. ",
	          "");
	I_Method0(float, getXmin,
	          Properties::NON_VIRTUAL,
	          __float__getXmin,
	          "get mouse minimum x. ",
	          "");
	I_Method0(float, getXmax,
	          Properties::NON_VIRTUAL,
	          __float__getXmax,
	          "get mouse maximum x. ",
	          "");
	I_Method0(float, getYmin,
	          Properties::NON_VIRTUAL,
	          __float__getYmin,
	          "get mouse minimum y. ",
	          "");
	I_Method0(float, getYmax,
	          Properties::NON_VIRTUAL,
	          __float__getYmax,
	          "get mouse maximum y. ",
	          "");
	I_Method1(void, setX, IN, float, x,
	          Properties::NON_VIRTUAL,
	          __void__setX__float,
	          "set current mouse x position. ",
	          "");
	I_Method0(float, getX,
	          Properties::NON_VIRTUAL,
	          __float__getX,
	          "get current mouse x position. ",
	          "");
	I_Method1(void, setY, IN, float, y,
	          Properties::NON_VIRTUAL,
	          __void__setY__float,
	          "set current mouse y position. ",
	          "");
	I_Method0(float, getY,
	          Properties::NON_VIRTUAL,
	          __float__getY,
	          "get current mouse y position. ",
	          "");
	I_Method0(float, getXnormalized,
	          Properties::NON_VIRTUAL,
	          __float__getXnormalized,
	          "return the current mouse x value normalized to the range of -1 to 1. ",
	          "-1 would be the left hand side of the window. 0.0 would be the middle of the window. +1 would be the right hand side of the window. ");
	I_Method0(float, getYnormalized,
	          Properties::NON_VIRTUAL,
	          __float__getYnormalized,
	          "return the current mouse y value normalized to the range of -1 to 1. ",
	          "-1 would be the bottom of the window. 0.0 would be the middle of the window. +1 would be the top of the window. ");
	I_Method1(void, setMouseYOrientation, IN, osgGA::GUIEventAdapter::MouseYOrientation, myo,
	          Properties::NON_VIRTUAL,
	          __void__setMouseYOrientation__MouseYOrientation,
	          "set mouse-Y orientation (mouse-Y increases upwards or downwards). ",
	          "");
	I_Method0(osgGA::GUIEventAdapter::MouseYOrientation, getMouseYOrientation,
	          Properties::NON_VIRTUAL,
	          __MouseYOrientation__getMouseYOrientation,
	          "get mouse-Y orientation (mouse-Y increases upwards or downwards). ",
	          "");
	I_Method1(void, setButtonMask, IN, int, mask,
	          Properties::NON_VIRTUAL,
	          __void__setButtonMask__int,
	          "set current mouse button state. ",
	          "");
	I_Method0(int, getButtonMask,
	          Properties::NON_VIRTUAL,
	          __int__getButtonMask,
	          "get current mouse button state. ",
	          "");
	I_Method1(void, setModKeyMask, IN, int, mask,
	          Properties::NON_VIRTUAL,
	          __void__setModKeyMask__int,
	          "set modifier key mask. ",
	          "");
	I_Method0(int, getModKeyMask,
	          Properties::NON_VIRTUAL,
	          __int__getModKeyMask,
	          "get modifier key mask. ",
	          "");
	I_Method1(void, setScrollingMotion, IN, osgGA::GUIEventAdapter::ScrollingMotion, motion,
	          Properties::NON_VIRTUAL,
	          __void__setScrollingMotion__ScrollingMotion,
	          "set scrolling motion (for EventType::SCROLL). ",
	          "");
	I_Method0(osgGA::GUIEventAdapter::ScrollingMotion, getScrollingMotion,
	          Properties::NON_VIRTUAL,
	          __ScrollingMotion__getScrollingMotion,
	          "get scrolling motion (for EventType::SCROLL). ",
	          "");
	I_Method2(void, setScrollingMotionDelta, IN, float, x, IN, float, y,
	          Properties::NON_VIRTUAL,
	          __void__setScrollingMotionDelta__float__float,
	          "set the scrolling delta to x,y and the scrolling motion to SCROLL_2D. ",
	          "");
	I_Method0(float, getScrollingDeltaX,
	          Properties::NON_VIRTUAL,
	          __float__getScrollingDeltaX,
	          "get the scrolling x-delta. ",
	          "");
	I_Method0(float, getScrollingDeltaY,
	          Properties::NON_VIRTUAL,
	          __float__getScrollingDeltaY,
	          "get the scrolling y-delta. ",
	          "");
	I_Method1(void, setPenPressure, IN, float, pressure,
	          Properties::NON_VIRTUAL,
	          __void__setPenPressure__float,
	          "set the tablet pen pressure (range 0..1). ",
	          "");
	I_Method0(float, getPenPressure,
	          Properties::NON_VIRTUAL,
	          __float__getPenPressure,
	          "get the tablet pen pressure (range 0..1). ",
	          "");
	I_Method1(void, setPenTiltX, IN, float, tiltX,
	          Properties::NON_VIRTUAL,
	          __void__setPenTiltX__float,
	          "set the tablet pen tiltX in degrees. ",
	          "");
	I_Method0(float, getPenTiltX,
	          Properties::NON_VIRTUAL,
	          __float__getPenTiltX,
	          "get the tablet pen tiltX in degrees. ",
	          "");
	I_Method1(void, setPenTiltY, IN, float, tiltY,
	          Properties::NON_VIRTUAL,
	          __void__setPenTiltY__float,
	          "set the tablet pen tiltY in degrees. ",
	          "");
	I_Method0(float, getPenTiltY,
	          Properties::NON_VIRTUAL,
	          __float__getPenTiltY,
	          "get the tablet pen tiltY in degrees. ",
	          "");
	I_Method1(void, setPenRotation, IN, float, rotation,
	          Properties::NON_VIRTUAL,
	          __void__setPenRotation__float,
	          "set the tablet pen rotation around the Z-axis in degrees. ",
	          "");
	I_Method0(float, getPenRotation,
	          Properties::NON_VIRTUAL,
	          __float__getPenRotation,
	          "get the tablet pen rotation around the Z-axis in degrees. ",
	          "");
	I_Method1(void, setTabletPointerType, IN, osgGA::GUIEventAdapter::TabletPointerType, pt,
	          Properties::NON_VIRTUAL,
	          __void__setTabletPointerType__TabletPointerType,
	          "set the tablet pointer type. ",
	          "");
	I_Method0(osgGA::GUIEventAdapter::TabletPointerType, getTabletPointerType,
	          Properties::NON_VIRTUAL,
	          __TabletPointerType__getTabletPointerType,
	          "get the tablet pointer type. ",
	          "");
	I_Method0(const osg::Matrix, getPenOrientation,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Matrix__getPenOrientation,
	          "set the orientation from a tablet input device as a matrix. ",
	          "");
	I_StaticMethod0(osg::ref_ptr< osgGA::GUIEventAdapter > &, getAccumulatedEventState,
	                __osg_ref_ptrT1_GUIEventAdapter__R1__getAccumulatedEventState_S,
	                "Get the accumulated event state singleton. ",
	                "Typically all EventQueue will share this single GUIEventAdapter object for tracking the mouse position, keyboard and mouse masks. ");
	I_SimpleProperty(int, Button, 
	                 __int__getButton, 
	                 __void__setButton__int);
	I_SimpleProperty(int, ButtonMask, 
	                 __int__getButtonMask, 
	                 __void__setButtonMask__int);
	I_SimpleProperty(osgGA::GUIEventAdapter::EventType, EventType, 
	                 __EventType__getEventType, 
	                 __void__setEventType__EventType);
	I_SimpleProperty(osg::GraphicsContext *, GraphicsContext, 
	                 0, 
	                 __void__setGraphicsContext__osg_GraphicsContext_P1);
	I_SimpleProperty(bool, Handled, 
	                 __bool__getHandled, 
	                 __void__setHandled__bool);
	I_SimpleProperty(int, Key, 
	                 __int__getKey, 
	                 __void__setKey__int);
	I_SimpleProperty(int, ModKeyMask, 
	                 __int__getModKeyMask, 
	                 __void__setModKeyMask__int);
	I_SimpleProperty(osgGA::GUIEventAdapter::MouseYOrientation, MouseYOrientation, 
	                 __MouseYOrientation__getMouseYOrientation, 
	                 __void__setMouseYOrientation__MouseYOrientation);
	I_SimpleProperty(const osg::Matrix, PenOrientation, 
	                 __C5_osg_Matrix__getPenOrientation, 
	                 0);
	I_SimpleProperty(float, PenPressure, 
	                 __float__getPenPressure, 
	                 __void__setPenPressure__float);
	I_SimpleProperty(float, PenRotation, 
	                 __float__getPenRotation, 
	                 __void__setPenRotation__float);
	I_SimpleProperty(float, PenTiltX, 
	                 __float__getPenTiltX, 
	                 __void__setPenTiltX__float);
	I_SimpleProperty(float, PenTiltY, 
	                 __float__getPenTiltY, 
	                 __void__setPenTiltY__float);
	I_SimpleProperty(float, ScrollingDeltaX, 
	                 __float__getScrollingDeltaX, 
	                 0);
	I_SimpleProperty(float, ScrollingDeltaY, 
	                 __float__getScrollingDeltaY, 
	                 0);
	I_SimpleProperty(osgGA::GUIEventAdapter::ScrollingMotion, ScrollingMotion, 
	                 __ScrollingMotion__getScrollingMotion, 
	                 __void__setScrollingMotion__ScrollingMotion);
	I_SimpleProperty(osgGA::GUIEventAdapter::TabletPointerType, TabletPointerType, 
	                 __TabletPointerType__getTabletPointerType, 
	                 __void__setTabletPointerType__TabletPointerType);
	I_SimpleProperty(double, Time, 
	                 __double__getTime, 
	                 __void__setTime__double);
	I_SimpleProperty(int, WindowHeight, 
	                 __int__getWindowHeight, 
	                 0);
	I_SimpleProperty(int, WindowWidth, 
	                 __int__getWindowWidth, 
	                 0);
	I_SimpleProperty(int, WindowX, 
	                 __int__getWindowX, 
	                 0);
	I_SimpleProperty(int, WindowY, 
	                 __int__getWindowY, 
	                 0);
	I_SimpleProperty(float, X, 
	                 __float__getX, 
	                 __void__setX__float);
	I_SimpleProperty(float, Xmax, 
	                 __float__getXmax, 
	                 0);
	I_SimpleProperty(float, Xmin, 
	                 __float__getXmin, 
	                 0);
	I_SimpleProperty(float, Xnormalized, 
	                 __float__getXnormalized, 
	                 0);
	I_SimpleProperty(float, Y, 
	                 __float__getY, 
	                 __void__setY__float);
	I_SimpleProperty(float, Ymax, 
	                 __float__getYmax, 
	                 0);
	I_SimpleProperty(float, Ymin, 
	                 __float__getYmin, 
	                 0);
	I_SimpleProperty(float, Ynormalized, 
	                 __float__getYnormalized, 
	                 0);
END_REFLECTOR

