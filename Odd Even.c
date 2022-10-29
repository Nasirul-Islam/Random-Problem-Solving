#include <stdio.h>
int main()
{
    int a;
    printf("Enter a non negative integer: ");
    scanf("%d", &a);
    while (a <= 0)
    {
        printf("Enter a non negative integer: ");
        scanf("%d", &a);
    }

    if (a % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}