#include <stdio.h>
int main()
{
    int x, i;
    scanf("%d", &x);
    printf("Using for loop: \n");
    for (i = 1; i <= x; i++)
    {
        printf("%d\n", i);
    }
    i = 1;
    printf("Using while loop: \n");
    while (i <= x)
    {
        printf("%d\n", i);
        i++;
    }
    i = 1;
    printf("Using do while loop: \n");
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= x);
    return 0;
}