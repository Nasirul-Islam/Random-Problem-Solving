#include <stdio.h>
int main()
{
    long long int num;
    int count = 0;
    scanf("%lld", &num);
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    printf("%d  digits", count);
}