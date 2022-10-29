#include <stdio.h>
#include <math.h>
int main()
{
    int num, i, count = 0;
    scanf("%d", &num);
    int x = sqrt(num);
    for (i = 1; i <= x; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 1)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Composite\n");
    }
}