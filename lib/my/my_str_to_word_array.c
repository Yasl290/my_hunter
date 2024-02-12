/*
** EPITECH PROJECT, 2023
** my_str_to_word_array.c
** File description:
** Split a string into words.
*/

#include <stdlib.h>
#include <stdio.h>

char **copy_array(char const *str, char **array)
{
    int i;
    int j = 0;
    int size = 0;

    for (i = 0; str[i] != 0; i++) {
        if (my_is_alphanum(str[i]) == 1) {
            array[size][j] = str[i];
            j++;
        }
        if (my_is_alphanum(str[i]) == 1 && my_is_alphanum(str[i + 1]) == 0) {
            size++;
            j = 0;
        }
    }
    array[size] = 0;
    return (array);
}

char **my_str_to_word_array(char const *str)
{
    int i = 0;
    int j = 0;
    int size = 0;
    char **array = malloc(sizeof(char *) * (my_strlen(str) + 1));

    while (str[i] != 0) {
        if (my_is_alphanum(str[i]) == 1) {
            j++;
        }
        if (my_is_alphanum(str[i]) == 1 && my_is_alphanum(str[i + 1]) == 0) {
            array[size] = malloc(sizeof(char) * j + 2);
            size++;
            j = 0;
        }
        i++;
    }
    copy_array(str, array);
}
