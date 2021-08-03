/*
 * Author: Matheus Amorim Constancio
 *
 * Pi estimate
 *
 * With a "n" amount of points, is possible to estimate the value of Pi. If we put the 
 * n points within a square and then draw a circle inside it, the amount of points within that
 * drawn circle is equal to a quarter of Pi. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int cir_p = 0, n, i;
    float dist, x, y, pi;

    srand(time(0));

    system("clear");

    printf("Amount of points: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        x = (float)rand() / RAND_MAX;
        y = (float)rand() / RAND_MAX;

        dist = ((x * x) + (y * y));

        if (dist <= 1)
            cir_p += 1;
    }

    pi = ((4.0 * cir_p) / n);

    printf("Points within the circle: %d\nEstimated value of Pi: %f\n", cir_p, pi);

    return 0;
}