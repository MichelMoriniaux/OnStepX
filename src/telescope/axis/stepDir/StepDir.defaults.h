#pragma once

#ifndef AXIS1_DRIVER_ENABLE_STATE
#define AXIS1_DRIVER_ENABLE_STATE     LOW  // default state of ENable pin for motor power on
#endif
#ifndef AXIS2_DRIVER_ENABLE_STATE
#define AXIS2_DRIVER_ENABLE_STATE     LOW
#endif
#ifndef AXIS3_DRIVER_ENABLE_STATE
#define AXIS3_DRIVER_ENABLE_STATE     LOW
#endif
#ifndef AXIS4_DRIVER_ENABLE_STATE
#define AXIS4_DRIVER_ENABLE_STATE     LOW
#endif
#ifndef AXIS5_DRIVER_ENABLE_STATE
#define AXIS5_DRIVER_ENABLE_STATE     LOW
#endif
#ifndef AXIS6_DRIVER_ENABLE_STATE
#define AXIS6_DRIVER_ENABLE_STATE     LOW
#endif
#ifndef AXIS7_DRIVER_ENABLE_STATE
#define AXIS7_DRIVER_ENABLE_STATE     LOW
#endif
#ifndef AXIS8_DRIVER_ENABLE_STATE
#define AXIS8_DRIVER_ENABLE_STATE     LOW
#endif
#ifndef AXIS9_DRIVER_ENABLE_STATE
#define AXIS9_DRIVER_ENABLE_STATE     LOW
#endif

#ifndef AXIS1_DRIVER_STEP_STATE
#define AXIS1_DRIVER_STEP_STATE       HIGH // default signal transition state for a step
#endif
#ifndef AXIS2_DRIVER_STEP_STATE
#define AXIS2_DRIVER_STEP_STATE       HIGH
#endif
#ifndef AXIS3_DRIVER_STEP_STATE
#define AXIS3_DRIVER_STEP_STATE       HIGH
#endif
#ifndef AXIS4_DRIVER_STEP_STATE
#define AXIS4_DRIVER_STEP_STATE       HIGH
#endif
#ifndef AXIS5_DRIVER_STEP_STATE
#define AXIS5_DRIVER_STEP_STATE       HIGH
#endif
#ifndef AXIS6_DRIVER_STEP_STATE
#define AXIS6_DRIVER_STEP_STATE       HIGH
#endif
#ifndef AXIS7_DRIVER_STEP_STATE
#define AXIS7_DRIVER_STEP_STATE       HIGH
#endif
#ifndef AXIS8_DRIVER_STEP_STATE
#define AXIS8_DRIVER_STEP_STATE       HIGH
#endif
#ifndef AXIS9_DRIVER_STEP_STATE
#define AXIS9_DRIVER_STEP_STATE       HIGH
#endif

#if AXIS1_DRIVER_STEP_STATE == AXIS2_DRIVER_STEP_STATE == AXIS3_DRIVER_STEP_STATE == AXIS4_DRIVER_STEP_STATE == AXIS5_DRIVER_STEP_STATE == AXIS6_DRIVER_STEP_STATE == AXIS7_DRIVER_STEP_STATE == AXIS8_DRIVER_STEP_STATE == AXIS9_DRIVER_STEP_STATE == HIGH
  #define DRIVER_STEP_DEFAULTS
#endif