/*
** EPITECH PROJECT, 2023
** my_strncpy.c
** File description:
** Copy n characters from a string into another.
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n) {
        dest [i] = src [i];
        i++;
    }
    return (dest);
}
