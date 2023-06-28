/*
 * LLVM-MSVC SDK - C Header
 *
 * Description:
 * This header file provides macros and declarations specific to the LLVM MSVC
 * SDK. It defines the LLVM-MSVC SDK version and includes necessary
 * compatibility code. This header is part of LLVM-MSVC, a project that aims to
 * enhance compatibility and support for Microsoft Visual C++ in LLVM.
 *
 * (c) 2023 LLVM-MSVC Project. All rights reserved.
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

////////////////////////////////////////////////////////
//                   Macro						//
////////////////////////////////////////////////////////

// Define the LLVM MSVC SDK version
#define LLVM_MSVC_SDK_VERSION 20230627

////////////////////////////////////////////////////////
//                   Function					//
////////////////////////////////////////////////////////

// Although this function is useless, please do not delete
void __cdecl llvm_msvc_marker_function_CAF1A3DFB505FFED0D024130F58C5CFA(
    const char *Marker);

#ifdef __cplusplus
}
#endif
