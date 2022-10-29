#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    // printf("%d %d %d %d", a, b, c, d);
    if (a > c && a > d && b > c && b > d)
    {
        printf("NO\n");
    }
    else if (c > a && c > b && d > a && d > b)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
}