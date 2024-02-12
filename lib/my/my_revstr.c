/*
** EPITECH PROJECT, 2023
** my_revstr.c
** File description:
** Reverse a string.
*/

char *my_revstr(char *str)
{
    int length = 0;
    int index = 0;
    char start_char;
    char end_char;

    while (str[length] != 0) {
        length++;
    }
    while (index < (length / 2)) {
        start_char = str[index];
        end_char = str[length - index - 1];
        str[index] = end_char;
        str[length - index - 1] = start_char;
        index++;
    }
    return (str);
}
