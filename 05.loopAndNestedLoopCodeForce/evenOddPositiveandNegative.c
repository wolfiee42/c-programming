#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int i;
    int even = 0, odd = 0, pos = 0, neg = 0;
    for (i = 1; i <= N; i++)
    {
        int a;
        scanf("%d", &a);

        if (a % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (a < 0)
        {
            neg++;
        }
        else if (a > 0)
        {
            pos++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, pos, neg);
}