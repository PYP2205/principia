#ifndef _BACKEND__H_
#define _BACKEND__H_

#if !defined TMS_BACKEND_LINUX && !defined TMS_BACKEND_LINUX_SS && !defined TMS_BACKEND_ANDROID && !defined TMS_BACKEND_WINDOWS && !defined TMS_BACKEND_IOS
#error undefined backend, modify your makefile
#endif

#include <tms/core/err.h>

#ifdef __cplusplus
extern "C" {
#endif

struct tms_context;

extern const char *T_B_strings[]; /* backends.c */

int tbackend_init_surface(void);

const char *tbackend_get_storage_path();

void tbackend_toggle_fullscreen(void);

#ifdef __cplusplus
}
#endif

#endif
