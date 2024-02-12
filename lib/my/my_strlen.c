/*
** EPITECH PROJECT, 2023
** my_strlen.c
** File description:
** Count and returns the number of characters
** found in the string passed as parameter.
*/

int my_strlen(char const *str)
{
    int index;

    index = 0;
    while (str[index] != '\0' ) {
        index = index + 1;
    }
    return (index);
}
