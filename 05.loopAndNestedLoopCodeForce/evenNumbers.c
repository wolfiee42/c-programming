#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int i;
    if (N == 1)
    {
        printf("-1");
        return 0;
    }
    for (i = 1; i <= N; i++)
    {

        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
}