#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two integer: ");
    scanf("%d %d", &a, &b);
    if (a == b)
        printf("They are Equal");
    else if (a > b)
        printf("A is bigger.");
    else
        printf("B is bigger.");
}