/*
** EPITECH PROJECT, 2023
** B-MUL-100-LIL-1-1-myhunter-yanis.asselman
** File description:
** images_hunter
*/
#include "include/my.h"
#include "include/struct.h"
#include <stdlib.h>

int allocate_images_memory(GLOBAL_T *ALL)
{
    ALL->pics = malloc(sizeof(*ALL->pics) * 100);
    if (!ALL->pics) {
        return 84;
    }
    return 0;
}

int load_images(GLOBAL_T *ALL)
{
    int num_images;
    SpriteParams images[] = {
        {"./content/lg.jpg", 0.70, 0.70, 1, 1},
        {"./content/pb.jpg", 0.90, 0.90, 235, 100},
        {"./content/yy.jpg", 1.00, 1.00, 1, 1},
        {"./content/bird.png", 0.80, 0.80, 1, 1}
    };

    num_images = sizeof(images) / sizeof(images[0]);
    NB = 0;
    for (int i = 0; i < num_images; i++) {
        if (create_obj(ALL, images[i]) == 84) {
            return 84;
        }
    }
    return 0;
}

int load_and_allocate_images(GLOBAL_T *ALL)
{
    if (allocate_images_memory(ALL) == 84) {
        return 84;
    }
    if (load_images(ALL) == 84) {
        free(ALL->pics);
        return 84;
    }
    return 0;
}

int init_sprite(GLOBAL_T *ALL)
{
    if (load_and_allocate_images(ALL) == 84) {
        return 84;
    }
    if (load_font(&(ALL->resources), "./content/stocky.ttf") == 84) {
        free(ALL->pics);
        return 84;
    }
    return 0;
}
