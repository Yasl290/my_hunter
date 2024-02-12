/*
** EPITECH PROJECT, 2023
** B-MUL-100-LIL-1-1-myhunter-yanis.asselman
** File description:
** hunter_functions
*/
#include <stdlib.h>
#include "include/my.h"
#include "include/struct.h"

int g_ini(GLOBAL_T *ALL, sfFont **font, sfClock **clock, sfClock **moveClock)
{
    *font = sfFont_createFromFile("./content/stocky.ttf");
    if (!(*font)) {
        my_printf("erreur de chargement de la police\n");
        return 84;
    }
    *clock = sfClock_create();
    *moveClock = sfClock_create();
    sfWindow_setFramerateLimit((sfWindow*)ALL->stgs.win, 60);
    return 0;
}

static void hmc(sfVector2f *bp, int *score, sfSprite *bs, sfVector2i mousePos)
{
    sfFloatRect birdBounds = sfSprite_getGlobalBounds(bs);

    if (sfFloatRect_contains(&birdBounds, mousePos.x, mousePos.y)) {
        bp->x = -110;
        bp->y = rand() % (580 - 20) + 20;
        sfSprite_setPosition(bs, *bp);
        (*score)++;
    }
}

void event_handle(GLOBAL_T *ALL, sfVector2f *bp, int *score, sfSprite *bs)
{
    sfVector2i mousePos;

    while (sfRenderWindow_pollEvent(ALL->stgs.win, &ALL->stgs.event)) {
        if (ALL->stgs.event.type == sfEvtMouseButtonPressed) {
            mousePos = SFMPR(ALL->stgs.win);
            hmc(bp, score, bs, mousePos);
        }
        close_win(ALL);
    }
}

void up_bird(sfClock *clock, sfIntRect *birdRect, sfSprite *bs)
{
    sfTime time = sfClock_getElapsedTime(clock);

    if (time.microseconds / 1000000.0 > 0.1) {
        move_rect(birdRect, 110, 330);
        sfClock_restart(clock);
        sfSprite_setTextureRect(bs, *birdRect);
    }
}

void update_p(sfClock *moveClock, BirdState *birdState, sfSprite *bs)
{
    sfTime moveTime = sfClock_getElapsedTime(moveClock);

    if (moveTime.microseconds / 1000000.0 > 0.02) {
        birdState->position.x += birdState->vitesseHorizontale;
        birdState->position.y += birdState->directionVerticale * 2;
        if (birdState->position.y < 20 || birdState->position.y > 580) {
            birdState->directionVerticale *= -1;
            birdState->position.y += birdState->directionVerticale * 2;
        }
        if (birdState->position.x > 800) {
            birdState->position.x = -110;
            birdState->position.y = rand() % (580 - 20) + 20;
            birdState->vitesseHorizontale += 0.5;
        }
        sfSprite_setPosition(bs, birdState->position);
        sfClock_restart(moveClock);
    }
}

void disp_g(GLOBAL_T *ALL, int score, sfFont *font, sfSprite *bs)
{
    sfRenderWindow_clear(ALL->stgs.win, sfWhite);
    sfRenderWindow_drawSprite(ALL->stgs.win, ALL->pics[2].sprite, NULL);
    sfRenderWindow_drawSprite(ALL->stgs.win, bs, NULL);
    score_display(ALL->stgs.win, font, score);
    sfRenderWindow_display(ALL->stgs.win);
}
