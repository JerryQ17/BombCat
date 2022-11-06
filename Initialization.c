#include "BombCatHeader.h"

SDL_Window *Window = NULL; //窗口
SDL_Renderer *Renderer = NULL; //画笔（渲染）

SDL_Surface *MainBackGroundSurface = NULL; //表面它是图形
SDL_Texture *MainBackGroundTexture = NULL; //轨迹，让画笔能把它画出来
SDL_Rect MainBackGroundRect; //Texture的信息，长，宽，高等

SDL_Surface *PlayBackGroundSurface = NULL;
SDL_Texture *PlayBackGroundTexture = NULL;
SDL_Rect PlayBackGroundRect;

int CardPile[] = {1, 1, 1, 1, 2, 2, 3, 3, 3, 3,
                  3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
                  3, 4, 4, 4, 4, 4, 5, 5, 5, 5,
                  5, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7,
                  8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
                  9, 9, 9, 9, 9,};
/*1~9分别对应readme中的卡牌
1.Bomb 2. Remove 3.Blank 4.Foresee 5.Trick 6.Skip 7.Forbid 8.Favor 9.Attack */

