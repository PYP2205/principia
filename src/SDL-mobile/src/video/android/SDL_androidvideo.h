/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2012 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/
#include "SDL_config.h"

#ifndef _SDL_androidvideo_h
#define _SDL_androidvideo_h

#include "SDL_mutex.h"
#include "../SDL_sysvideo.h"

/* Called by the JNI layer when the screen changes size or format */
extern void Android_SetScreenResolution(int width, int height, Uint32 format, float density_x, float density_y);

/* Private display data */

extern int Android_ScreenWidth;
extern int Android_ScreenHeight;
extern float Android_ScreenDensityX;
extern float Android_ScreenDensityY;
extern Uint32 Android_ScreenFormat;
extern SDL_sem *Android_PauseSem, *Android_ResumeSem;
extern SDL_Window *Android_Window;


#endif /* _SDL_androidvideo_h */

/* vi: set ts=4 sw=4 expandtab: */
