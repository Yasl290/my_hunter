/*
** EPITECH PROJECT, 2023
** my_compute_power_rec.c
** File description:
** Return the first argument raised to the power p, where p is the second
** argument.
*/

int my_compute_power_rec(int nb, int p)
{
    int result;

    if (p == 0) {
        return (1);
    }
    if (p < 0) {
        return (0);
    }
    result = nb * my_compute_power_rec(nb, p - 1);
}
