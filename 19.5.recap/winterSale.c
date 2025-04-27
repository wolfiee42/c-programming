#include <stdio.h>

int main()
{
    int x, p;
    scanf("%d %d", &x, &p);

    float up = p * 100;
    float down = 100 - x;
    float priceBeforeDiscount = up / down;

    printf("%0.2f", priceBeforeDiscount);
}