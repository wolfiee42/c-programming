#include <stdio.h>

int main()
{
    int N;
    int ans = 1999;
    while (scanf("%d", &N))
    {
        if (ans == N)
        {
            printf("Correct\n");
            return 0;
        }
        else
        {
            printf("Wrong\n");
        }
    }
}