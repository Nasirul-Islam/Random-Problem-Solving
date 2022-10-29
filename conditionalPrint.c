#include <stdio.h>
int main()
{
    int x, i;
    scanf("%d", &x);
    if (x >= 0)
    {
        for (i = 1; i <= x; i++)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        for (i = -1; i >= x; i--)
        {
            printf("%d\n", i);
        }
    }
}