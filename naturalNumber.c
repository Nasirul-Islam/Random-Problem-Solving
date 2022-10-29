#include <stdio.h>
int main()
{
    int num, i = 1;
    printf("Enter a integer: ");
    scanf("%d", &num);
    while (i <= num)
    {
        printf("Number is : %d and Square of the %d is :%d\n", i, i, i * i);
        i++;
    }
}