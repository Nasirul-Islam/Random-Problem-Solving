#include <stdio.h>
int main()
{
    int num, half, i;
    scanf("%d", &num);
    half = num / 2;
    for (i = 1; i <= half; i++)
    {
        if (num % i == 0)
        {
            printf("%d, ", i);
        }
    }
    printf("%d.\n", num);
}