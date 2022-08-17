#include <stdio.h>

int main()
{
    int loop, terms;
    double pi, sign;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    pi = 3.0;
    sign = 1.0;
    for (loop = 1; loop <= terms; loop++)
    {
        pi += sign * (4.0 / ((2.0 * loop) * (2.0 * loop + 1) * (2.0 * loop + 2)));
        sign *= -1.0;
    }
    printf("\nValue of PI: %12.10lf\n", pi);
    return 0;
}