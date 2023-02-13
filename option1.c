/*
** EPITECH PROJECT, 2023
** option1.c
** File description:
** option1
*/
#include <stdio.h>

void first_option(double n, double k)
{
    double x1 = n;

    printf("1 %.2f\n", x1);
    for (int i = 1; i != 100; i++) {
        x1 = k * x1 * ((1000 - x1) / 1000);
        if (x1 < 0)
            x1 = 0;
        printf("%i %.2f\n", i + 1, x1);
    }
}