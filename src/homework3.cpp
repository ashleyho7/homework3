/*
 * homework3.cpp
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

#include "homework3.h"
#include "rtwtypes.h"
#include "homework3_types.h"
#include "homework3_private.h"
#include <string.h>

/* Block signals (default storage) */
B_homework3_T homework3_B;

/* Block states (default storage) */
DW_homework3_T homework3_DW;

/* Real-time model */
RT_MODEL_homework3_T homework3_M_ = RT_MODEL_homework3_T();
RT_MODEL_homework3_T *const homework3_M = &homework3_M_;

/*
 * System initialize for enable system:
 *    '<S4>/Enabled Subsystem'
 *    '<S5>/Enabled Subsystem'
 */
void homework3_EnabledSubsystem_Init(B_EnabledSubsystem_homework3_T *localB,
  P_EnabledSubsystem_homework3_T *localP)
{
  /* SystemInitialize for SignalConversion generated from: '<S6>/In1' incorporates:
   *  Outport: '<S6>/Out1'
   */
  localB->In1 = localP->Out1_Y0;
}

/*
 * Output and update for enable system:
 *    '<S4>/Enabled Subsystem'
 *    '<S5>/Enabled Subsystem'
 */
void homework3_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_homework3_std_msgs_Float64 *rtu_In1, B_EnabledSubsystem_homework3_T
  *localB)
{
  /* Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S6>/Enable'
   */
  if (rtu_Enable) {
    /* SignalConversion generated from: '<S6>/In1' */
    localB->In1 = *rtu_In1;
  }

  /* End of Outputs for SubSystem: '<S4>/Enabled Subsystem' */
}

/* Model step function */
void homework3_step(void)
{
  SL_Bus_homework3_std_msgs_Float64 rtb_BusAssignment;
  SL_Bus_homework3_std_msgs_Float64 tmp;
  boolean_T b_varargout_1;

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe' */
  /* MATLABSystem: '<S4>/SourceBlock' */
  b_varargout_1 = Sub_homework3_2.getLatestMessage(&tmp);

  /* Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' */
  /* Start for MATLABSystem: '<S4>/SourceBlock' */
  homework3_EnabledSubsystem(b_varargout_1, &tmp, &homework3_B.EnabledSubsystem);

  /* End of Outputs for SubSystem: '<S4>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe' */

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe1' */
  /* MATLABSystem: '<S5>/SourceBlock' */
  b_varargout_1 = Sub_homework3_8.getLatestMessage(&tmp);

  /* Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' */
  /* Start for MATLABSystem: '<S5>/SourceBlock' */
  homework3_EnabledSubsystem(b_varargout_1, &tmp,
    &homework3_B.EnabledSubsystem_f);

  /* End of Outputs for SubSystem: '<S5>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe1' */

  /* BusAssignment: '<Root>/Bus Assignment' incorporates:
   *  Constant: '<Root>/alpha'
   *  Constant: '<Root>/tau'
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  rtb_BusAssignment.Data = (homework3_B.EnabledSubsystem_f.In1.Data -
    homework3_B.EnabledSubsystem.In1.Data * homework3_P.tau_Value) *
    homework3_P.alpha_Value;

  /* Outputs for Atomic SubSystem: '<Root>/Publish' */
  /* MATLABSystem: '<S3>/SinkBlock' */
  Pub_homework3_15.publish(&rtb_BusAssignment);

  /* End of Outputs for SubSystem: '<Root>/Publish' */
}

/* Model initialize function */
void homework3_initialize(void)
{
  /* Registration code */

  /* block I/O */
  (void) memset((static_cast<void *>(&homework3_B)), 0,
                sizeof(B_homework3_T));

  /* states (dwork) */
  (void) memset(static_cast<void *>(&homework3_DW), 0,
                sizeof(DW_homework3_T));

  {
    char_T b_zeroDelimTopic[17];
    char_T b_zeroDelimTopic_0[11];
    static const char_T b_zeroDelimTopic_1[17] = "/car/state/vel_x";
    static const char_T b_zeroDelimTopic_2[11] = "/lead_dist";
    static const char_T b_zeroDelimTopic_3[11] = "/cmd_accel";

    /* Start for Atomic SubSystem: '<Root>/Subscribe' */
    /* Start for MATLABSystem: '<S4>/SourceBlock' */
    homework3_DW.obj_g.matlabCodegenIsDeleted = false;
    homework3_DW.objisempty_h = true;
    homework3_DW.obj_g.isInitialized = 1;
    for (int32_T i = 0; i < 17; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_1[i];
    }

    Sub_homework3_2.createSubscriber(&b_zeroDelimTopic[0], 1);
    homework3_DW.obj_g.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S4>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe' */

    /* Start for Atomic SubSystem: '<Root>/Subscribe1' */
    /* Start for MATLABSystem: '<S5>/SourceBlock' */
    homework3_DW.obj_e.matlabCodegenIsDeleted = false;
    homework3_DW.objisempty = true;
    homework3_DW.obj_e.isInitialized = 1;
    for (int32_T i = 0; i < 11; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_2[i];
    }

    Sub_homework3_8.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    homework3_DW.obj_e.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe1' */

    /* Start for Atomic SubSystem: '<Root>/Publish' */
    /* Start for MATLABSystem: '<S3>/SinkBlock' */
    homework3_DW.obj.matlabCodegenIsDeleted = false;
    homework3_DW.objisempty_o = true;
    homework3_DW.obj.isInitialized = 1;
    for (int32_T i = 0; i < 11; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_3[i];
    }

    Pub_homework3_15.createPublisher(&b_zeroDelimTopic_0[0], 1);
    homework3_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S3>/SinkBlock' */
    /* End of Start for SubSystem: '<Root>/Publish' */
  }

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe' */
  /* SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem' */
  homework3_EnabledSubsystem_Init(&homework3_B.EnabledSubsystem,
    &homework3_P.EnabledSubsystem);

  /* End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1' */
  /* SystemInitialize for Enabled SubSystem: '<S5>/Enabled Subsystem' */
  homework3_EnabledSubsystem_Init(&homework3_B.EnabledSubsystem_f,
    &homework3_P.EnabledSubsystem_f);

  /* End of SystemInitialize for SubSystem: '<S5>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe1' */
}

/* Model terminate function */
void homework3_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Subscribe' */
  /* Terminate for MATLABSystem: '<S4>/SourceBlock' */
  if (!homework3_DW.obj_g.matlabCodegenIsDeleted) {
    homework3_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S4>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe' */

  /* Terminate for Atomic SubSystem: '<Root>/Subscribe1' */
  /* Terminate for MATLABSystem: '<S5>/SourceBlock' */
  if (!homework3_DW.obj_e.matlabCodegenIsDeleted) {
    homework3_DW.obj_e.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S5>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe1' */

  /* Terminate for Atomic SubSystem: '<Root>/Publish' */
  /* Terminate for MATLABSystem: '<S3>/SinkBlock' */
  if (!homework3_DW.obj.matlabCodegenIsDeleted) {
    homework3_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S3>/SinkBlock' */
  /* End of Terminate for SubSystem: '<Root>/Publish' */
}
