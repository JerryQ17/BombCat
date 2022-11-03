#include "BombCatHeader.h"

SDL_Window  *Window = NULL; //窗口
SDL_Renderer *Renderer = NULL; //画笔（渲染）

SDL_Surface  *MainBackGroundSurface = NULL; //表面它是图形
SDL_Texture *MainBackGroundTexture = NULL; //轨迹，让画笔能把它画出来
SDL_Rect MainBackGroundRect; //Texture的信息，长，宽，高等

SDL_Surface *PlayBackGroundSurface = NULL;
SDL_Texture *PlayBackGroundTexture = NULL;
SDL_Rect  PlayBackGroundRect;