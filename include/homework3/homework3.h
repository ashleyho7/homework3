/*
 * homework3.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "homework3".
 *
 * Model version              : 1.3
 * Simulink Coder version : 24.1 (R2024a) 19-Nov-2023
 * C++ source code generated on : Wed Oct 30 16:42:19 2024
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef homework3_h_
#define homework3_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "homework3_types.h"
#include <string.h>
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<S4>/Enabled Subsystem' */
struct B_EnabledSubsystem_homework3_T {
  SL_Bus_homework3_std_msgs_Float64 In1;/* '<S6>/In1' */
};

/* Block signals (default storage) */
struct B_homework3_T {
  B_EnabledSubsystem_homework3_T EnabledSubsystem_f;/* '<S5>/Enabled Subsystem' */
  B_EnabledSubsystem_homework3_T EnabledSubsystem;/* '<S4>/Enabled Subsystem' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_homework3_T {
  ros_slroscpp_internal_block_P_T obj; /* '<S3>/SinkBlock' */
  ros_slroscpp_internal_block_S_T obj_e;/* '<S5>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_g;/* '<S4>/SourceBlock' */
  boolean_T objisempty;                /* '<S5>/SourceBlock' */
  boolean_T objisempty_h;              /* '<S4>/SourceBlock' */
  boolean_T objisempty_o;              /* '<S3>/SinkBlock' */
};

/* Parameters for system: '<S4>/Enabled Subsystem' */
struct P_EnabledSubsystem_homework3_T_ {
  SL_Bus_homework3_std_msgs_Float64 Out1_Y0;/* Computed Parameter: Out1_Y0
                                             * Referenced by: '<S6>/Out1'
                                             */
};

/* Parameters (default storage) */
struct P_homework3_T_ {
  SL_Bus_homework3_std_msgs_Float64 Constant_Value;/* Computed Parameter: Constant_Value
                                                    * Referenced by: '<S1>/Constant'
                                                    */
  SL_Bus_homework3_std_msgs_Float64 Constant_Value_h;/* Computed Parameter: Constant_Value_h
                                                      * Referenced by: '<S4>/Constant'
                                                      */
  SL_Bus_homework3_std_msgs_Float64 Constant_Value_d;/* Computed Parameter: Constant_Value_d
                                                      * Referenced by: '<S5>/Constant'
                                                      */
  real_T alpha_Value;                  /* Expression: 1.5
                                        * Referenced by: '<Root>/alpha'
                                        */
  real_T tau_Value;                    /* Expression: 2
                                        * Referenced by: '<Root>/tau'
                                        */
  P_EnabledSubsystem_homework3_T EnabledSubsystem_f;/* '<S5>/Enabled Subsystem' */
  P_EnabledSubsystem_homework3_T EnabledSubsystem;/* '<S4>/Enabled Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_homework3_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_homework3_T homework3_P;

#ifdef __cplusplus

}

#endif

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_homework3_T homework3_B;

#ifdef __cplusplus

}

#endif

/* Block states (default storage) */
extern struct DW_homework3_T homework3_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void homework3_initialize(void);
  extern void homework3_step(void);
  extern void homework3_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_homework3_T *const homework3_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'homework3'
 * '<S1>'   : 'homework3/Blank Message'
 * '<S2>'   : 'homework3/MATLAB Function'
 * '<S3>'   : 'homework3/Publish'
 * '<S4>'   : 'homework3/Subscribe'
 * '<S5>'   : 'homework3/Subscribe1'
 * '<S6>'   : 'homework3/Subscribe/Enabled Subsystem'
 * '<S7>'   : 'homework3/Subscribe1/Enabled Subsystem'
 */
#endif                                 /* homework3_h_ */
