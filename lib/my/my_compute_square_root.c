/*
** EPITECH PROJECT, 2023
** my_compute_square_root.c
** File description:
** Return the square root (if it is a whole number)
** of the number given as argument.
*/

int my_compute_square_root(int nb)
{
    int sqr_root;

    sqr_root = 0;
    while (sqr_root * sqr_root != nb && sqr_root * sqr_root < nb) {
        sqr_root = sqr_root + 1;
        if (sqr_root > 46340) {
            return (0);
        }
    }
    if (sqr_root * sqr_root == nb) {
        return (sqr_root);
    } else {
        return (0);
    }
}
