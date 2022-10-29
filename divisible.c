#include <stdio.h>
int main()
{
    int x, y, i;
    scanf("%d %d", &x, &y);
    for (i = 1; i < x; i++)
    {
        if (i % y == 0)
            printf("%d ", i);
    }
}