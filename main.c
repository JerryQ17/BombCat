#include "BombCatHeader.h"

void LOAD (); //用来加载图片的
void PLAY (); //开始游戏的函数
void QUIT (); //退出函数

SDL_Window  *Window = NULL; //窗口
SDL_Renderer *Renderer = NULL; //画笔（渲染）

SDL_Surface  *MainBackGroundSurface = NULL; //表面它是图形
SDL_Texture *MainBackGroundTexture = NULL; //轨迹，让画笔能把它画出来
SDL_Rect MainBackGroundRect; //Texture的信息，长，宽，高等

SDL_Surface *PlayBackGroundSurface = NULL;
SDL_Texture *PlayBackGroundTexture = NULL;
SDL_Rect  PlayBackGroundRect;

int SDL_main(int argc, char *argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO)) { //初始化一个视频，成功返回值为零
        SDL_Log("Can not init video,%s", SDL_GetError()); //失败返回值是1，打印错误信息
        return 1; //表明程序是异常退出
    }
    Window = SDL_CreateWindow("Example",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,1280,720,SDL_WINDOW_SHOWN);
    //显示在窗口的右上角 ， 窗口出现在屏幕的正中央                      ， 尺寸            ，显示窗口的标志
    if (Window == NULL) {
        SDL_Log("Can not creat window,%s", SDL_GetError());
        return 2;
    }

    Renderer = SDL_CreateRenderer(Window,-1,SDL_RENDERER_ACCELERATED);

    SDL_Event MainEvent; //(主事件）
    LOAD();

    SDL_RenderClear(Renderer); //清空画笔
    SDL_RenderCopy(Renderer,MainBackGroundTexture,NULL,NULL);
    SDL_RenderPresent(Renderer); //刷新画笔

    while(SDL_WaitEvent(&MainEvent)) { //一直在里面跑直到SDL_Quit(),所以先写SDL_Quit()的条件;
        switch (MainEvent.type) {
            case SDL_QUIT: //退出
                QUIT();
                break;
            case SDL_KEYDOWN: //键盘交互
                switch(MainEvent.key.keysym.sym) { //按下什么键进行什么操作
                    case SDLK_RETURN: //回车
                        // 加功能
                        break;
                    case SDLK_ESCAPE: // Esc键
                        //其他的键就是SDLK_某个键
                        QUIT();
                        break;
                    default:
                        break;
                }
                break;
            case SDL_MOUSEBUTTONDOWN: //鼠标按下
                printf(("(%d,%d)\n"),MainEvent.button.x,MainEvent.button.y);
                PLAY();
                break;
            case SDL_MOUSEBUTTONUP: //鼠标抬起
                break;
            case SDL_MOUSEMOTION: //鼠标移动
                break;
            default:
                break;
        }
    }

    QUIT();
    // SDL_Quit(); //类似于return 0;
}



void LOAD() {
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

void PLAY () {
    SDL_RenderClear(Renderer);
    SDL_RenderCopy(Renderer,PlayBackGroundTexture,NULL,NULL);
    SDL_RenderPresent(Renderer);
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