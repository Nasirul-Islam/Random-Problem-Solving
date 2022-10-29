#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if (n == 1 && m == 1)
    {
        printf("%d", 0);
    }
    else if (n == 1 && m > 1)
    {
        printf("%d", m - 1);
    }
    else if (n > 1 && m == 1)
    {
        printf("%d", n - 1);
    }
    else
    {
        printf("%d", (m - 1) * n);
    }
}