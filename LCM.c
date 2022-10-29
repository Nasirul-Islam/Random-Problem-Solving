#include <stdio.h>
int main()
{
    int a, b, i, lcm, gcd = 0;
    scanf("%d %d", &a, &b);
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    lcm = (a * b) / gcd;
    printf("The LCM of %d and %d is %d.\n", a, b, lcm);
}