#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("even");
        return 0;
    }
    else
    {
        printf("odd");
        return 0;
    }
}