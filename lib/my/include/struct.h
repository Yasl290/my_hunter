/*
** EPITECH PROJECT, 2023
** B-MUL-100-LIL-1-1-myhunter-yanis.asselman
** File description:
** struct
*/
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Types.h>
#include <SFML/System/Vector2.h>


#ifndef STRUCT_H_
    #define STRUCT_H_

typedef struct {
    char *file_path;
    double scale_x;
    double scale_y;
    double pos_x;
    double pos_y;
} SpriteParams;


typedef struct PARAM {
    sfVideoMode mode;
    sfRenderWindow *win;
    sfEvent event;
    sfMusic *mus;
    int img_n;
} PARAMS_T;

typedef struct ELEM {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f scale;
    sfVector2f pos;
} ELEMS_T;

typedef struct {
    sfSoundBuffer *buffergame;
    sfSound *ost;
} SOUNDS;

typedef struct {
    sfClock *clock;
    sfClock *moveClock;
    sfFont *font;
} GR_T;

typedef struct {
    sfIntRect birdRect;
    sfVector2f birdPosition;
    float vitesseHorizontale;
    int directionVerticale;
    int score;
} GS_T;

typedef struct {
    sfVector2f position;
    float vitesseHorizontale;
    int directionVerticale;
} BirdState;


typedef struct GLOBAL {
    PARAMS_T stgs;
    ELEMS_T *pics;
    SOUNDS son;
    GR_T resources;
    GS_T state;
} GLOBAL_T;


#endif
