/*
** EPITECH PROJECT, 2023
** my_charlowcase.c
** File description:
** Put a char in lowcase.
*/

char my_charlowcase(char c)
{
    if ('A' <= c && 'Z' >= c) {
        return (c + 32);
    } else {
        return c;
    }
}
