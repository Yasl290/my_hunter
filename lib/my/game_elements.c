/*
** EPITECH PROJECT, 2023
** B-MUL-100-LIL-1-1-myhunter-yanis.asselman
** File description:
** animation
*/

#include "include/struct.h"
#include "include/my.h"

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left >= max_value) {
        rect->left = 0;
    }
}

void score_function(char *scoreString, int score)
{
    int i = 7;

    if (score >= 1000) {
        scoreString[i] = '0' + (score / 1000);
        i++;
    }
    if (score >= 100) {
        scoreString[i] = '0' + ((score / 100) % 10);
        i++;
    }
    if (score >= 10) {
        scoreString[i] = '0' + ((score / 10) % 10);
        i++;
    }
    scoreString[i] = '0' + (score % 10);
    i++;
    scoreString[i] = '\0';
}

void score_display(sfRenderWindow* window, sfFont* font, int score)
{
    char scoreString[20] = "SCORE: ";
    sfText *scoreText = sfText_create();

    score_function(scoreString, score);
    sfText_setFont(scoreText, font);
    sfText_setCharacterSize(scoreText, 35);
    sfText_setColor(scoreText, sfWhite);
    sfText_setString(scoreText, scoreString);
    sfText_setPosition(scoreText, (sfVector2f){550, 10});
    sfRenderWindow_drawText(window, scoreText, NULL);
    sfText_destroy(scoreText);
}

void sound_init(GLOBAL_T *ALL)
{
    ALL->son.buffergame = sfSoundBuffer_createFromFile("./content/ost.ogg");
    ALL->son.ost = sfSound_create();
    sfSound_setBuffer(ALL->son.ost, ALL->son.buffergame);
    sfSound_setVolume(ALL->son.ost, 05.0);
}
