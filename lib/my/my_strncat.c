/*
** EPITECH PROJECT, 2023
** my_strncat.c
** File description:
** Concatenate n characters of the src
** string to the end iof the dest string.
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int dest_len = my_strlen(dest);
    int i = 0;

    while (i < nb) {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return dest;
}
