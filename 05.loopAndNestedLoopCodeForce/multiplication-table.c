#include <stdio.h>

int main()
{
    int n;
    int N;
    scanf("%d", &N);

    int i;
    for (i = 1; i <= 12; i++)
    {
        int sum = i * N;
        printf("%d * %d = %d\n", N, i, sum);
    }
}