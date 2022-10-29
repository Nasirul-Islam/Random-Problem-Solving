#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three integer: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
        printf("They are Equal");
    else if (a > b && a > c)
        printf("A is Biggers.");
    else if (b > a && b > c)
        printf("B is Biggers.");
    else if (a == b && a > c)
        printf("A and B are Biggers.");
    else if (a == c && a > b)
        printf("A and C are Biggers.");
    else if (b == c && b > a)
        printf("B and C are Biggers.");
    else
        printf("C is Biggers.");
}