#include <stdio.h>

int main()
{
    char N;
    scanf("%c", &N);

    if (N >= 97 && N <= 121)
    {
        N++;
    }
    else
    {
        N = N - 25;
    }

    printf("%c", N);
}