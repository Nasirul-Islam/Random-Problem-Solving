#include <stdio.h>
#include <math.h>

int main()
{
    int num = 12345678, digit, i = 9;

    digit = (int)(num / pow(10, i)) % 10;

    printf("%d\n", digit);
    return 0;
}