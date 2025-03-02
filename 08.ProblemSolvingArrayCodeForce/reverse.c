#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int arrOfNum[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arrOfNum[i]);
    }

    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d ", arrOfNum[i]);
    }
}