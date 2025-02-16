#include <stdio.h>

int main()
{
    int x;
    x = 10;

    float y;
    y = 10.5;

    char z;
    z = 'Z\n';
    printf("%d %f %c", x, y, z);
    printf("%0.2f", y); // 0.2 refers how my digits i want to see after .
    return 0;
}