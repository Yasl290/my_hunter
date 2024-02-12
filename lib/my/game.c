/*
** EPITECH PROJECT, 2023
** B-MUL-100-LIL-1-1-myhunter-yanis.asselman
** File description:
** backg
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/struct.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Types.h>
#include <SFML/System/Vector2.h>

void close_win(GLOBAL_T *ALL)
{
    if (EVENT.type == sfEvtClosed) {
                sfRenderWindow_close(WIND);
                }
}

void displayin(GLOBAL_T *ALL, sfRenderWindow* window, sfFont* font, int score)
{
    sfRenderWindow_clear(window, sfWhite);
    sfRenderWindow_drawSprite(window, ALL->pics[2].sprite, NULL);
    sfRenderWindow_drawSprite(window, ALL->pics[3].sprite, NULL);
    score_display(window, font, score);
    sfRenderWindow_display(window);
}

void game_inti(GLOBAL_T *ALL)
{
    int score = 0;
    sfFont *font;
    sfClock *clock;
    sfClock *moveClock;
    sfIntRect birdRect = {0, 0, 110, 110};
    BirdState birdState = {{-110, rand() % (580 - 20) + 20}, 5.0, 1};

    g_ini(ALL, &font, &clock, &moveClock);
    while (sfRenderWindow_isOpen(ALL->stgs.win)) {
        event_handle(ALL, &birdState.position, &score, ALL->pics[3].sprite);
        up_bird(clock, &birdRect, ALL->pics[3].sprite);
        update_p(moveClock, &birdState, ALL->pics[3].sprite);
        disp_g(ALL, score, font, ALL->pics[3].sprite);
    }
    sfClock_destroy(clock);
    sfClock_destroy(moveClock);
    sfFont_destroy(font);
}
