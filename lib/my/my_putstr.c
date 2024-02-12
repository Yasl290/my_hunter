/*
** EPITECH PROJECT, 2023
** my_putstr.c
** File description:
** my_putstr
*/
int my_putstr(char *s)
{
    int	count;

    count = 0;
    while (*s)
        count += write(1, s, 1);
        s++;
    return count;
}
