#include <stdio.h>
int main()
{
    int a;
    printf("Enter a non negative integer: ");
    scanf("%d", &a);
    while (a <= 0 || a > 100)
    {
        printf("Enter a non negative integer: ");
        scanf("%d", &a);
    }

    if (a <= 32)
        printf("F\n");
    else if (a <= 39 && a >= 33)
        printf("D\n");
    else if (a <= 49 && a >= 40)
        printf("C\n");
    else if (a <= 59 && a >= 50)
        printf("B\n");
    else if (a <= 69 && a >= 60)
        printf("A-\n");
    else if (a <= 79 && a >= 70)
        printf("A\n");
    else
        printf("A+\n");
}