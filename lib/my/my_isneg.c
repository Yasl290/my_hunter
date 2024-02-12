/*
** EPITECH PROJECT, 2023
** my_isneg.c
** File description:
** Display either N if the integer passed as parameter is negative or P,
** if positive or null.
*/

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
}
