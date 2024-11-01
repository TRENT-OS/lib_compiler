/*
 * Copyright (C) 2020-2024, HENSOLDT Cyber GmbH
 * 
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * For commercial licensing, contact: info.cyber@hensoldt.net
 */

# pragma once

#if !defined(INLINE)
#  if defined(__GNUC__)
#    if !defined(__GNUC_STDC_INLINE__)
#      if defined(__OPTIMIZE__)
#        define INLINE extern inline
#      else
#        define INLINE static inline
#      endif
#    else
#      define INLINE static inline
#    endif
#  else
#    define INLINE inline
#  endif
#endif

#if !defined(DECL_UNUSED_VAR)
#   if defined(__GNUC__)
#       define DECL_UNUSED_VAR(x) x __attribute__((unused))
#   else
#       define DECL_UNUSED_VAR(x) x
#   endif
#endif

#if !defined(UNUSED_VAR)
#   define UNUSED_VAR(x) (void) x
#endif

#if !defined(DECL_UNUSED_FUNC)
#   if defined(__GNUC__)
#       define DECL_UNUSED_FUNC(x) __attribute__((unused)) x
#   else
#       define DECL_UNUSED_FUNC(x) x
#   endif
#endif

#if !defined(DECL_NORETURN_FUNC)
#   if defined(__GNUC__)
#       define DECL_NORETURN_FUNC(x) __attribute__((__noreturn__)) x
#   else
#       define DECL_NORETURN_FUNC(x) x
#   endif
#endif
