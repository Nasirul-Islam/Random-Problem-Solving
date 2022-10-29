#include <stdio.h>
int main()
{
    int N, M, i, temp = 24;
    scanf("%d %d", &N, &M);
    if (N > M)
    {
        for (i = N; i <= temp; i++)
        {
            if (i == 24)
            {
                i = 0;
                temp = M;
            }
            printf("%d ", i);
        }
    }
    for (i = N; i <= M; i++)
    {
        printf("%d ", i);
    }
}