/*===---- arm_sme_draft_spec_subject_to_change.h - ARM SME intrinsics ------===
 *
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

#ifndef __ARM_SME_H
#define __ARM_SME_H

#if !defined(__LITTLE_ENDIAN__)
#error "Big endian is currently not supported for arm_sme_draft_spec_subject_to_change.h"
#endif
#include <arm_sve.h> 

/* Function attributes */
#define __ai static __inline__ __attribute__((__always_inline__, __nodebug__))

#ifdef  __cplusplus
extern "C" {
#endif

__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svld1_hor_vnum_za128), arm_streaming, arm_shared_za))
void svld1_hor_vnum_za128(uint64_t, uint32_t, uint64_t, svbool_t, void const *, int64_t);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svld1_hor_vnum_za16), arm_streaming, arm_shared_za))
void svld1_hor_vnum_za16(uint64_t, uint32_t, uint64_t, svbool_t, void const *, int64_t);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svld1_hor_vnum_za32), arm_streaming, arm_shared_za))
void svld1_hor_vnum_za32(uint64_t, uint32_t, uint64_t, svbool_t, void const *, int64_t);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svld1_hor_vnum_za64), arm_streaming, arm_shared_za))
void svld1_hor_vnum_za64(uint64_t, uint32_t, uint64_t, svbool_t, void const *, int64_t);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svld1_hor_vnum_za8), arm_streaming, arm_shared_za))
void svld1_hor_vnum_za8(uint64_t, uint32_t, uint64_t, svbool_t, void const *, int64_t);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svld1_hor_za128), arm_streaming, arm_shared_za))
void svld1_hor_za128(uint64_t, uint32_t, uint64_t, svbool_t, void const *);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svld1_hor_za16), arm_streaming, arm_shared_za))
void svld1_hor_za16(uint64_t, uint32_t, uint64_t, svbool_t, void const *);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svld1_hor_za32), arm_streaming, arm_shared_za))
void svld1_hor_za32(uint64_t, uint32_t, uint64_t, svbool_t, void const *);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svld1_hor_za64), arm_streaming, arm_shared_za))
void svld1_hor_za64(uint64_t, uint32_t, uint64_t, svbool_t, void const *);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svld1_hor_za8), arm_streaming, arm_shared_za))
void svld1_hor_za8(uint64_t, uint32_t, uint64_t, svbool_t, void const *);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svld1_ver_vnum_za128), arm_streaming, arm_shared_za))
void svld1_ver_vnum_za128(uint64_t, uint32_t, uint64_t, svbool_t, void const *, int64_t);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svld1_ver_vnum_za16), arm_streaming, arm_shared_za))
void svld1_ver_vnum_za16(uint64_t, uint32_t, uint64_t, svbool_t, void const *, int64_t);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svld1_ver_vnum_za32), arm_streaming, arm_shared_za))
void svld1_ver_vnum_za32(uint64_t, uint32_t, uint64_t, svbool_t, void const *, int64_t);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svld1_ver_vnum_za64), arm_streaming, arm_shared_za))
void svld1_ver_vnum_za64(uint64_t, uint32_t, uint64_t, svbool_t, void const *, int64_t);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svld1_ver_vnum_za8), arm_streaming, arm_shared_za))
void svld1_ver_vnum_za8(uint64_t, uint32_t, uint64_t, svbool_t, void const *, int64_t);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svld1_ver_za128), arm_streaming, arm_shared_za))
void svld1_ver_za128(uint64_t, uint32_t, uint64_t, svbool_t, void const *);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svld1_ver_za16), arm_streaming, arm_shared_za))
void svld1_ver_za16(uint64_t, uint32_t, uint64_t, svbool_t, void const *);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svld1_ver_za32), arm_streaming, arm_shared_za))
void svld1_ver_za32(uint64_t, uint32_t, uint64_t, svbool_t, void const *);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svld1_ver_za64), arm_streaming, arm_shared_za))
void svld1_ver_za64(uint64_t, uint32_t, uint64_t, svbool_t, void const *);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svld1_ver_za8), arm_streaming, arm_shared_za))
void svld1_ver_za8(uint64_t, uint32_t, uint64_t, svbool_t, void const *);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svst1_hor_vnum_za128), arm_streaming, arm_shared_za, arm_preserves_za))
void svst1_hor_vnum_za128(uint64_t, uint32_t, uint64_t, svbool_t, void *, int64_t);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svst1_hor_vnum_za16), arm_streaming, arm_shared_za, arm_preserves_za))
void svst1_hor_vnum_za16(uint64_t, uint32_t, uint64_t, svbool_t, void *, int64_t);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svst1_hor_vnum_za32), arm_streaming, arm_shared_za, arm_preserves_za))
void svst1_hor_vnum_za32(uint64_t, uint32_t, uint64_t, svbool_t, void *, int64_t);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svst1_hor_vnum_za64), arm_streaming, arm_shared_za, arm_preserves_za))
void svst1_hor_vnum_za64(uint64_t, uint32_t, uint64_t, svbool_t, void *, int64_t);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svst1_hor_vnum_za8), arm_streaming, arm_shared_za, arm_preserves_za))
void svst1_hor_vnum_za8(uint64_t, uint32_t, uint64_t, svbool_t, void *, int64_t);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svst1_hor_za128), arm_streaming, arm_shared_za, arm_preserves_za))
void svst1_hor_za128(uint64_t, uint32_t, uint64_t, svbool_t, void *);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svst1_hor_za16), arm_streaming, arm_shared_za, arm_preserves_za))
void svst1_hor_za16(uint64_t, uint32_t, uint64_t, svbool_t, void *);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svst1_hor_za32), arm_streaming, arm_shared_za, arm_preserves_za))
void svst1_hor_za32(uint64_t, uint32_t, uint64_t, svbool_t, void *);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svst1_hor_za64), arm_streaming, arm_shared_za, arm_preserves_za))
void svst1_hor_za64(uint64_t, uint32_t, uint64_t, svbool_t, void *);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svst1_hor_za8), arm_streaming, arm_shared_za, arm_preserves_za))
void svst1_hor_za8(uint64_t, uint32_t, uint64_t, svbool_t, void *);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svst1_ver_vnum_za128), arm_streaming, arm_shared_za, arm_preserves_za))
void svst1_ver_vnum_za128(uint64_t, uint32_t, uint64_t, svbool_t, void *, int64_t);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svst1_ver_vnum_za16), arm_streaming, arm_shared_za, arm_preserves_za))
void svst1_ver_vnum_za16(uint64_t, uint32_t, uint64_t, svbool_t, void *, int64_t);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svst1_ver_vnum_za32), arm_streaming, arm_shared_za, arm_preserves_za))
void svst1_ver_vnum_za32(uint64_t, uint32_t, uint64_t, svbool_t, void *, int64_t);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svst1_ver_vnum_za64), arm_streaming, arm_shared_za, arm_preserves_za))
void svst1_ver_vnum_za64(uint64_t, uint32_t, uint64_t, svbool_t, void *, int64_t);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svst1_ver_vnum_za8), arm_streaming, arm_shared_za, arm_preserves_za))
void svst1_ver_vnum_za8(uint64_t, uint32_t, uint64_t, svbool_t, void *, int64_t);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svst1_ver_za128), arm_streaming, arm_shared_za, arm_preserves_za))
void svst1_ver_za128(uint64_t, uint32_t, uint64_t, svbool_t, void *);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svst1_ver_za16), arm_streaming, arm_shared_za, arm_preserves_za))
void svst1_ver_za16(uint64_t, uint32_t, uint64_t, svbool_t, void *);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svst1_ver_za32), arm_streaming, arm_shared_za, arm_preserves_za))
void svst1_ver_za32(uint64_t, uint32_t, uint64_t, svbool_t, void *);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svst1_ver_za64), arm_streaming, arm_shared_za, arm_preserves_za))
void svst1_ver_za64(uint64_t, uint32_t, uint64_t, svbool_t, void *);
__ai __attribute__((__clang_arm_builtin_alias(__builtin_sme_svst1_ver_za8), arm_streaming, arm_shared_za, arm_preserves_za))
void svst1_ver_za8(uint64_t, uint32_t, uint64_t, svbool_t, void *);
#ifdef __cplusplus
} // extern "C"
#endif

#undef __ai

#endif /* __ARM_SME_H */
