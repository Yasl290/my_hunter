/*
** EPITECH PROJECT, 2023
** B-MUL-100-LIL-1-1-myhunter-yanis.asselman
** File description:
** hunter_start
*/

#include "include/my.h"
#include "include/struct.h"
#include <stdlib.h>


void window_init(GLOBAL_T *ALL)
{
    my_printf("Window initialize\n");
    MODE.bitsPerPixel = 32;
    MODE.width = 800;
    MODE.height = 600;
    WIND = sfRenderWindow_create(MODE, "my_hunter", sfResize | sfClose, NULL);
}

int load_font(GR_T *resources, char *font_path)
{
    resources->font = sfFont_createFromFile(font_path);
    if (!resources->font) {
        my_printf("Erreur de chargement de la police\n");
        return 84;
    }
    return 0;
}

int create_obj(GLOBAL_T *ALL, SpriteParams params)
{
    ALL->pics[NB].texture = SFFF(params.file_path, NULL);
    if (!ALL->pics[NB].texture) {
        my_printf("texture error\n");
        return 84;
    }
    ALL->pics[NB].texture = SFFF(params.file_path, NULL);
    ALL->pics[NB].sprite = sfSprite_create();
    ALL->pics[NB].scale.x = params.scale_x;
    ALL->pics[NB].scale.y = params.scale_y;
    ALL->pics[NB].pos.x = params.pos_x;
    ALL->pics[NB].pos.y = params.pos_y;
    NB++;
}

void apply(GLOBAL_T *ALL)
{
    for (int i = 0; i < NB; i++) {
        sfSprite_setPosition(ALL->pics[i].sprite, ALL->pics[i].pos);
        sfSprite_setScale(ALL->pics[i].sprite, ALL->pics[i].scale);
        SFSST(ALL->pics[i].sprite, ALL->pics[i].texture, sfTrue);
    }
}

int starting(GLOBAL_T *ALL)
{
    window_init(ALL);
    if (init_sprite(ALL) == 84) {
        return 84;
    }
    apply(ALL);
    return 0;
}
