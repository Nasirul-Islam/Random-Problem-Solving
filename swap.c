#include <stdio.h>
int main()
{
    int a = 5, b = 13, temp;
    // Write code here
    temp = a;
    a = b;
    b = temp;
    // End of code
    printf("%d and %d", a, b);
}