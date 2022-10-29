#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    while (N != M)
    {
        printf("%d ", N);
        if (N == 23)
        {
            N = 0;
        }
        else
        {
            N++;
        }
    }
    printf("%d ", N);
}