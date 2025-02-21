#include <stdio.h>

int main()
{
    int biggeatNum = 0;
    int i;

    int N;
    int n;
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        scanf("%d", &n);
        if (n >= biggeatNum)
        {
            biggeatNum = n;
        }
    }
    printf("%d", biggeatNum);
}