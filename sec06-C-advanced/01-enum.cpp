// enum
#include <stdio.h>

enum EGameSate {
    GAMESTATE_MAINMENU = 0,
    GAMESTATE_PLAYING = 1,
    GAMESTATE_PAUSED = 2,
    GAMESTATE_GAMEOVER = 3
};


int main() {
    int currState = GAMESTATE_MAINMENU;

    while (true) {
        switch (currState)
        {
        case GAMESTATE_MAINMENU:
            printf("메인 메뉴");
            currState = 1;
            break;

        case GAMESTATE_PLAYING:
            break;

        case GAMESTATE_PAUSED:
            break;

        case GAMESTATE_GAMEOVER:
            break;
        
        }
    }
}