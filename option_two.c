/*
** EPITECH PROJECT, 2023
** option_two.c
** File description:
** option_two
*/
#include <math.h>
#include <stdio.h>

int option_two(double pop, int start, int end)
{
    double pop_temp = pop;
    int i = 0;

    for (double k = 1; k < 4 ; k = k + 0.01) {
        pop = pop_temp;
        for (; i < start; i++)
            pop = k * pop * ((1000 - pop) / 1000);
        for (; i < end; i++) {
            pop = k * pop * ((1000 - pop) / 1000);
            printf("%0.2f %0.2f\n", k, pop);
        }
    }
}
