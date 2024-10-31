#ifndef HOMEWORK3__VISIBILITY_CONTROL_H_
#define HOMEWORK3__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define HOMEWORK3_EXPORT __attribute__ ((dllexport))
    #define HOMEWORK3_IMPORT __attribute__ ((dllimport))
  #else
    #define HOMEWORK3_EXPORT __declspec(dllexport)
    #define HOMEWORK3_IMPORT __declspec(dllimport)
  #endif
  #ifdef HOMEWORK3_BUILDING_LIBRARY
    #define HOMEWORK3_PUBLIC HOMEWORK3_EXPORT
  #else
    #define HOMEWORK3_PUBLIC HOMEWORK3_IMPORT
  #endif
  #define HOMEWORK3_PUBLIC_TYPE HOMEWORK3_PUBLIC
  #define HOMEWORK3_LOCAL
#else
  #define HOMEWORK3_EXPORT __attribute__ ((visibility("default")))
  #define HOMEWORK3_IMPORT
  #if __GNUC__ >= 4
    #define HOMEWORK3_PUBLIC __attribute__ ((visibility("default")))
    #define HOMEWORK3_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define HOMEWORK3_PUBLIC
    #define HOMEWORK3_LOCAL
  #endif
  #define HOMEWORK3_PUBLIC_TYPE
#endif
#endif  // HOMEWORK3__VISIBILITY_CONTROL_H_
// Generated 30-Oct-2024 16:42:29
// Copyright 2019-2020 The MathWorks, Inc.
