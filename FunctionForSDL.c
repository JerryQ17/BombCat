#include "BombCatHeader.h"

void LoadPicture() {
  MainBackGroundSurface = IMG_Load(("image/mainUI.png")); //用于加载图片
  MainBackGroundTexture = SDL_CreateTextureFromSurface(Renderer,MainBackGroundSurface);
  MainBackGroundRect.x = 0;
  MainBackGroundRect.y = 0;
  //框的左上角为(0,0)的坐标系放图片
  MainBackGroundRect.w = MainBackGroundSurface -> w;
  MainBackGroundRect.h = MainBackGroundSurface -> h;
  PlayBackGroundSurface = IMG_Load(("image/gameUI.png"));
  PlayBackGroundTexture = SDL_CreateTextureFromSurface(Renderer,PlayBackGroundSurface);
  PlayBackGroundRect.x = 0;
  PlayBackGroundRect.y = 0;
  PlayBackGroundRect.w = PlayBackGroundSurface -> w;
  PlayBackGroundRect.h = PlayBackGroundSurface -> h;
}

void Begin () {
  SDL_RenderClear(Renderer);
  SDL_RenderCopy(Renderer,PlayBackGroundTexture,NULL,NULL);
  SDL_RenderPresent(Renderer);
}

void Draw(SDL_Texture *Texture) {
  SDL_RenderClear(Renderer); //清空画笔
  SDL_RenderCopy(Renderer, Texture, NULL, NULL);
  SDL_RenderPresent(Renderer); //刷新画笔
}

void QUIT () {
  SDL_FreeSurface(MainBackGroundSurface);
  SDL_FreeSurface(PlayBackGroundSurface);

  SDL_DestroyTexture(MainBackGroundTexture);
  SDL_DestroyTexture(PlayBackGroundTexture);

  SDL_DestroyWindow(Window); //摧毁窗口
  SDL_DestroyRenderer(Renderer); //摧毁画笔
  SDL_Quit();
}