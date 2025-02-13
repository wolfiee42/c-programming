#include <stdio.h>

int main()
{
    int x;
    float y;
    char z;
    scanf("%d %c %f", &x, &z, &y); // here '&' is pointing to memory location
    printf("%d %c %0.2f", x, z, y);
    return 0;
}
