/*
** EPITECH PROJECT, 2023
** my_is_alpha.c
** File description:
** Return 1 if alphabatic, 0 if not.
*/


int my_is_alpha(char c)
{
    if ('A' <= c && c <= 'Z') {
        return (1);
    }
    if ('a' <= c && c <= 'z') {
        return (1);
    } else {
        return (0);
    }
}
