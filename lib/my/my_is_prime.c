/*
** EPITECH PROJECT, 2023
** my_is_prime.c
** File description:
** Return 1 if the number is prime
** and 0 if not.
*/

int my_is_prime(int nb)
{
    int divisor = 1;
    int divisor_counter = 0;

    if (nb <= 1 || nb > 2147483647) {
        return (0);
    }
    while (nb % divisor > 0 || divisor_counter < 2) {
        if (divisor == nb) {
            return (1);
        }
        if (nb % divisor == 0) {
            divisor_counter++;
        }
        divisor++;
    }
    return (0);
}
