#ifndef ERROR_H
#define ERROR_H

// Error macros
#define E_MEM 1
#define E_GRAPHICS_INIT 2
#define E_SDL_VIDEO_INIT 3
#define E_SDL_WINDOW_CREATE 4
#define E_SDL_RENDERER_CREATE 5
#define E_REALLOC 6
#define E_NULL 7

int errorHandle(int error, ...);

#endif 
// error.h 
