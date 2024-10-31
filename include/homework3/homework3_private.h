/*
 * homework3_private.h
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

#ifndef homework3_private_h_
#define homework3_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "homework3.h"
#include "homework3_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

extern void homework3_EnabledSubsystem_Init(B_EnabledSubsystem_homework3_T
  *localB, P_EnabledSubsystem_homework3_T *localP);
extern void homework3_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_homework3_std_msgs_Float64 *rtu_In1, B_EnabledSubsystem_homework3_T
  *localB);

#endif                                 /* homework3_private_h_ */
