/*
 * Copyright (C) 2020-2021, HENSOLDT Cyber GmbH
 */

# pragma once

#ifndef INLINE
#  if __GNUC__
#    if !__GNUC_STDC_INLINE__
#      if __OPTIMIZE__
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

#if !defined DECL_UNUSED_VAR
#   if defined(__GNUC__)
#       define DECL_UNUSED_VAR(x) x __attribute__((unused))
#   elif defined(__LCLINT__)
#       define DECL_UNUSED_VAR(x) /*@unused@*/ x
#   elif defined(__cplusplus)
#       define DECL_UNUSED_VAR(x)
#   else
#       define DECL_UNUSED_VAR(x) x
#   endif
#endif

#if !defined(UNUSED_VAR)
#   define UNUSED_VAR(x) (void) x
#endif

#if !defined DECL_UNUSED_FUNC
#   if defined(__GNUC__)
#       define DECL_UNUSED_FUNC(x) __attribute__((unused)) x
#   else
#       define DECL_UNUSED_FUNC(x) x
#   endif
#endif

#if !defined DECL_NORETURN_FUNC
#   if defined(__GNUC__)
#       define DECL_NORETURN_FUNC(x) __attribute__((__noreturn__)) x
#   else
#       define DECL_NORETURN_FUNC(x) x
#   endif
#endif

