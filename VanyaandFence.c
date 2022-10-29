#include <stdio.h>
int main()
{
    int friends, height, fendHght, count = 0;
    scanf("%d %d", &friends, &height);
    for (int i = 0; i < friends; i++)
    {
        scanf("%d", &fendHght);
        if (fendHght > height)
            count += 2;
        else
            count++;
    }
    printf("%d\n", count);
    return 0;
}