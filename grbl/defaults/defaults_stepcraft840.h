#ifndef defaults_h
#define defaults_h

  // Grbl settings for OpenBuilds OX CNC Machine
  // http://www.openbuilds.com/builds/openbuilds-ox-cnc-machine.341/
  #define DEFAULT_X_STEPS_PER_MM 133.33
  #define DEFAULT_Y_STEPS_PER_MM 133.33
  #define DEFAULT_Z_STEPS_PER_MM 133.33
  #define DEFAULT_X_MAX_RATE 2400.0 // mm/min  Spec 2400
  #define DEFAULT_Y_MAX_RATE 2400.0 // mm/min
  #define DEFAULT_Z_MAX_RATE 1800.0 // mm/min  Spec 1800
  #define DEFAULT_X_ACCELERATION (20.0*60*60) // 20 mm/sec^2
  #define DEFAULT_Y_ACCELERATION (20.0*60*60) // 20 mm/sec^2
  #define DEFAULT_Z_ACCELERATION (20.0*60*60) // 20 mm/sec^2
  #define DEFAULT_X_MAX_TRAVEL 602.0 // mm
  #define DEFAULT_Y_MAX_TRAVEL 839.0 // mm
  #define DEFAULT_Z_MAX_TRAVEL 140.0 // mm
  #define DEFAULT_STEP_PULSE_MICROSECONDS 10
  #define DEFAULT_STEPPING_INVERT_MASK 0
  #define DEFAULT_DIRECTION_INVERT_MASK 0
  #define DEFAULT_STEPPER_IDLE_LOCK_TIME 25 // msec (0-254, 255 keeps steppers enabled)
  #define DEFAULT_STATUS_REPORT_MASK ((BITFLAG_RT_STATUS_MACHINE_POSITION)|(BITFLAG_RT_STATUS_WORK_POSITION))
  #define DEFAULT_JUNCTION_DEVIATION 0.01 // mm
  #define DEFAULT_ARC_TOLERANCE 0.002
  #define DEFAULT_REPORT_INCHES 0
  #define DEFAULT_INVERT_ST_ENABLE 0
  #define DEFAULT_INVERT_LIMIT_PINS 1
  #define DEFAULT_SOFT_LIMIT_ENABLE 1
  #define DEFAULT_HARD_LIMIT_ENABLE 1
  #define DEFAULT_HOMING_ENABLE 1
  #define DEFAULT_HOMING_DIR_MASK 1
  #define DEFAULT_HOMING_FEED_RATE 25.0 // mm/min
  #define DEFAULT_HOMING_SEEK_RATE 1000.0 // mm/min
  #define DEFAULT_HOMING_DEBOUNCE_DELAY 250 // msec (0-65k)
  #define DEFAULT_HOMING_PULLOFF 1.0 // mm

#endif