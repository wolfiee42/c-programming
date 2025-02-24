#include <stdio.h>

int main()
{
    int a;
    int i;
    scanf("%d", &a);

    for (i = 1; i <= 10000; i++)
    {
        if (a % i == 0)
        {
            printf("%d\n", i);
        }
    }
}