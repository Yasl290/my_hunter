/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** All mylib prototypes.
*/
#include <stdarg.h>
#include <stdbool.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Types.h>
#include <SFML/System/Vector2.h>
#include "struct.h"

#ifndef MY_H_
    #define MY_H_
    #define 	CSFML_WINDOW_API   CSFML_API_IMPORT


struct my_flags {
    int minus;
    int plus;
    int space;
    int diese;
    int zero;
};

typedef struct get_flag {
    struct my_flags my_flag;
    int my_width;
    int my_precision;
    char my_length;
    char my_specifier;
} get_flag_t;

int my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_strlen_bis(char const *str);
int my_is_prime_bis(int nb);
char **my_str_to_word_array(char const *str);
char **copy_array(char const *str, char **array);
int my_is_alphanum(char c);
char my_charlowcase(char c);
int my_printf(const char *format, ...);
int print_d(const char *format, va_list list, int i, get_flag_t flag);
int print_i(const char *format, va_list list, int i, get_flag_t flag);
int print_s(const char *format, va_list list, int i, get_flag_t flag);
int print_c(const char *format, va_list list, int i, get_flag_t flag);
int print_percent(const char *format, va_list list, int i, get_flag_t flag);
int print_p(const char *format, va_list list, int i, get_flag_t flag);
int my_unsigned_nbr(unsigned int nb);
int print_u(const char *specifier, va_list list, int i, get_flag_t flag);
int print_hex_address(void *ptr);
int print_o(const char *specifier, va_list list, int i, get_flag_t flag);
int my_unsigned_o(unsigned int nb);
int print_lowerx(const char *specifier, va_list list, int i, get_flag_t flag);
int my_unsigned_x(unsigned int nb);
int print_upperx(const char *specifier, va_list list, int i, get_flag_t flag);
int my_unsigned_upperx(unsigned int nb);
int loop_upperx(unsigned int nb, char *hexupper, int *y, int count);
int loop_x(unsigned int nb, char *hexlower, int *y, int count);
get_flag_t get_all_flags(const char *format, int *i);
int front_padding_int(get_flag_t flag, int arg_int);
int back_padding_int(get_flag_t flag, int arg_int);
int front_padding_str(get_flag_t flag, char *arg_str);
int back_padding_str(get_flag_t flag, char *arg_str);
int front_padding_char(get_flag_t flag);
int back_padding_char(get_flag_t flag);
int print_space_plus(get_flag_t flag, int arg_int);
int printf_f(double nb, int precision);
int print_f(const char *specifier, va_list list, int i, get_flag_t flag);
int plus_flag(get_flag_t flag, int arg_int);
int space_flag(get_flag_t flag, int arg_int);
int loop_printf_f(double *nb, int *precision);
int print_upperf(const char *specifier, va_list list, int i, get_flag_t flag);
int printf_upperf(double nb, int precision);
int loop_printf_upperf(double *nb, int *precision);
/*
fonctions pour hunter :
*/
    #define NB ALL->stgs.img_n
    #define SFFF sfTexture_createFromFile
    #define WIND ALL->stgs.win
    #define EVENT ALL->stgs.event
    #define IMG ALL->pics
    #define MODE ALL->stgs.mode
    #define SFSST sfSprite_setTexture
    #define SFMPR sfMouse_getPositionRenderWindow

int starting(GLOBAL_T *ALL);
void cleanup(GLOBAL_T *ALL);
void game_inti(GLOBAL_T *ALL);
void move_rect(sfIntRect *rect, int offset, int max_value);
void score_display(sfRenderWindow* window, sfFont* font, int score);
void sound_init(GLOBAL_T *ALL);
int checking(char *envp[]);
void window_menu(GLOBAL_T *ALL);
void close_win(GLOBAL_T *ALL);
void displayin(GLOBAL_T *ALL, sfRenderWindow* window, sfFont* font, int score);
void disp_g(GLOBAL_T *ALL, int score, sfFont *font, sfSprite *bs);
void update_p(sfClock *moveClock, BirdState *birdState, sfSprite *bs);
void up_bird(sfClock *clock, sfIntRect *birdRect, sfSprite *bs);
void event_handle(GLOBAL_T *ALL, sfVector2f *bp, int *score, sfSprite *bs);
int g_ini(GLOBAL_T *ALL, sfFont **font, sfClock **clock, sfClock **moveClock);
int create_obj(GLOBAL_T *ALL, SpriteParams params);
int load_images(GLOBAL_T *ALL);
int load_and_allocate_images(GLOBAL_T *ALL);
int init_sprite(GLOBAL_T *ALL);


#endif /* MY_H_ */
