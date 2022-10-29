#include <stdio.h>

int euclidean_GCD(a, b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        euclidean_GCD(b, a % b);
    }
}
int main()
{
    int a, b, i;
    scanf("%d %d", &a, &b);
    printf("The GCD of %d and %d is %d.\n", a, b, euclidean_GCD(a, b));
}