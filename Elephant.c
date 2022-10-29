#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d", &x);
    y = x / 5 + (x % 5 != 0);
    // if (x % 5 != 0) {y++;}
    printf("%d\n", y);
}