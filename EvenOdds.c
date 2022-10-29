#include <stdio.h>
int main()
{
    long long int num, find, odd = 0, x = 0;
    scanf("%lld %lld", &num, &find);
    if (num % 2 == 0)
    {
        odd = num / 2;
    }
    else
    {
        odd = (num / 2) + 1;
    }
    // -------
    if (find > odd)
    {
        x = find - odd;
        printf("%lld\n", x * 2);
    }
    else
    {
        x = (find * 2) - 1;
        printf("%lld\n", x);
    }
}