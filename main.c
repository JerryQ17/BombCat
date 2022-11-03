#include "BombCatHeader.h"

int SDL_main(int argc, char *argv[]) {
  if (SDL_Init(SDL_INIT_VIDEO)) { //初始化一个视频，成功返回值为零
	SDL_Log("Can not init video,%s", SDL_GetError()); //失败返回值是1，打印错误信息
	return 1; //表明程序是异常退出
  }
  Window = SDL_CreateWindow("Example", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WindowWidth, WindowHeight, SDL_WINDOW_SHOWN);
  //显示在窗口的右上角 ， 窗口出现在屏幕的正中央                      ， 尺寸            ，显示窗口的标志
  if (Window == NULL) {
	SDL_Log("Can not creat window,%s", SDL_GetError());
	return 2;
  }
  Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED);

  SDL_Event MainEvent; //(主事件）
  LoadPicture();
  Draw(MainBackGroundTexture);

  while (SDL_WaitEvent(&MainEvent)) { //一直在里面跑直到SDL_Quit(),所以先写SDL_Quit()的条件;
	switch (MainEvent.type) {
	  case SDL_QUIT: //退出
		QUIT();
		break;
	  case SDL_KEYDOWN: //键盘交互
		switch (MainEvent.key.keysym.sym) { //按下什么键进行什么操作
		  case SDLK_RETURN: //回车
			// 加功能
			break;
		  case SDLK_ESCAPE: // Esc键
			//其他的键就是SDLK_某个键
			QUIT();
			break;
		  default:break;
		}
		break;
	  case SDL_MOUSEBUTTONDOWN: //鼠标按下
		printf(("(%d,%d)\n"), MainEvent.button.x, MainEvent.button.y);
		if (MainEvent.button.x >= 228 && MainEvent.button.x <= 427 && MainEvent.button.y >= 440 && MainEvent.button.y <= 540) {
		  Draw(PlayBackGroundTexture);
		}
		break;
	  case SDL_MOUSEBUTTONUP: //鼠标抬起
		break;
	  case SDL_MOUSEMOTION: //鼠标移动
		break;
	  default:break;
	}
  }

  QUIT();
  // SDL_Quit(); //类似于return 0;
}



