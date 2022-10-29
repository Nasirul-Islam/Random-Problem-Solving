#include <stdio.h>
int main()
{
    int num = 99999, sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num = num / 10;
    }
    printf("%d\n", sum);
    return 0;
}