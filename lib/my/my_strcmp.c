/*
** EPITECH PROJECT, 2023
** my_strcmp
** File description:
** Compare two strings.
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int sum_one = 0;
    int sum_two = 0;

    while (s1[i] != 0 && s2[i] != 0) {
        sum_one = sum_one + s1[i];
        sum_two = sum_two + s2[i];
        i++;
    }
    if (sum_one < sum_two) {
        return (-1);
    }
    if (sum_one > sum_two) {
        return (1);
    }
    if (sum_one == sum_two) {
        return (0);
    }
}
