/*
** EPITECH PROJECT, 2023
** bsfml.c
** File description:
** boostrap
*/
#include "lib/my/include/my.h"
#include <stdbool.h>
#include "lib/my/include/struct.h"
#include <stdlib.h>
#include <stdio.h>

void cleanup(GLOBAL_T *ALL)
{
    for (int i = 0; i < NB; i++) {
        sfSprite_destroy(ALL->pics[i].sprite);
        sfTexture_destroy(ALL->pics[i].texture);
    }
    free(ALL->pics);
    if (ALL->stgs.win != NULL) {
        sfRenderWindow_destroy(ALL->stgs.win);
    }
    sfSound_destroy(ALL->son.ost);
    sfSoundBuffer_destroy(ALL->son.buffergame);
}

int help_display(void)
{
    FILE *file = fopen("./content/help.txt", "r");
    char ch;

    if (file == NULL) {
        my_printf("Erreur en ouvrant le fichier d'aide\n");
        return 84;
    }
    while (fread(&ch, 1, 1, file) == 1) {
        my_printf("%c", ch);
    }
    fclose(file);
    return 0;
}

int initialize(GLOBAL_T *ALL, int argc, char *argv[], char *envp[])
{
    char *arg;
    int result_env;

    for (int i = 1; i < argc; i++) {
        arg = argv[i];
        if (arg[0] == '-' && arg[1] == 'h' && arg[2] == '\0') {
            help_display();
            return 84;
        }
    }
    result_env = checking(envp);
    if (result_env == 84) {
        return 84;
    }
    if (starting(ALL) == 84) {
        return 84;
    }
    return 0;
}

int main(int argc, char *argv[], char *envp[])
{
    GLOBAL_T ALL;

    if (initialize(&ALL, argc, argv, envp) == 84) {
        return 84;
    }
    sound_init(&ALL);
    window_menu(&ALL);
    cleanup(&ALL);
    return 0;
}
