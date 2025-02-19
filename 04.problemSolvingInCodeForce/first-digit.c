#include <stdio.h>

int main()
{
    int X;
    scanf("%d", &X);

    int firsNum = X / 1000;

    if (firsNum % 2 == 0)
    {
        printf("EVEN\n");
        return 0;
    }
    else
    {
        printf("ODD\n");
        return 0;
    }
}