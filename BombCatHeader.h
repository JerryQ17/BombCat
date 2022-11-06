#ifndef BOMBCAT_BOMBCATHEADER_H
#define BOMBCAT_BOMBCATHEADER_H

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_ttf.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define WindowWidth 1280
#define WindowHeight 720

extern int CardPile[];

extern SDL_Window *Window; //窗口
extern SDL_Renderer *Renderer; //画笔（渲染）
extern SDL_Surface *MainBackGroundSurface; //表面它是图形
extern SDL_Texture *MainBackGroundTexture; //轨迹，让画笔能把它画出来
extern SDL_Rect MainBackGroundRect; //Texture的信息，长，宽，高等
extern SDL_Surface *PlayBackGroundSurface;
extern SDL_Texture *PlayBackGroundTexture;
extern SDL_Rect PlayBackGroundRect;

//SDL函数
void LoadPicture(); //用来加载图片的
void QUIT(); //退出函数
void Draw(SDL_Texture *Texture); //绘制图片

//卡牌函数
void trick(int CardPileInTrick[], int len); //5

//其他函数
void BeginGame(); //开始游戏的函数

#endif
