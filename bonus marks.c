#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two non negative integer: ");
    scanf("%d %d", &a, &b);
    while (a <= 0)
    {
        printf("Enter two non negative integer: ");
        scanf("%d %d", &a, &b);
    }

    if (a + b >= 100)
        printf("YES\n");
    else
        printf("NO\n");
}