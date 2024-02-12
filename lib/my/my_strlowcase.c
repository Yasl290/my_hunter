/*
** EPITECH PROJECT, 2023
** my_strlowcase.c
** File description:
** my_strlowcase
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != 0; i++) {
        str[i] = my_charlowcase(str[i]);
    }
    return str;
}
