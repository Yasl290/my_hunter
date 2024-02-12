/*
** EPITECH PROJECT, 2023
** my_find_prime_sup.c
** File description:
** Return the smallest prime number
** that is greater than, or equal to, the number given
** as a parameter.
*/

int my_find_prime_sup(int nb)
{
    int counter = nb;

    while (my_is_prime(counter) != 1) {
        counter++;
    }
    return (counter);
}
