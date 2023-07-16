#include <stdio.h>
int main()
{
    double R, n;
    n = 3.14159;
    
    scanf("%lf", &R);

    double aoc = n * (R * R);

    printf("A=%.4lf\n", aoc);
}