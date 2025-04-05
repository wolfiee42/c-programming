#include <stdio.h>

int main()
{
    int x = 100;
    int *ptr = &x;

    x = 200;

    printf("x er pointer - %d\n", x);
    printf("ptr er pointer - %d\n", *ptr);
    // printf("x er pointer - %p\n", &x);
    // printf("ptr er pointer - %p\n", ptr);
    // printf("ptr er location - %d\n", ptr);
    // printf("ptr er memory - %lu\n", sizeof(ptr));

    return 0;
}