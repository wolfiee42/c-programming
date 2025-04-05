#include <stdio.h>

void fun(int x)
{
    printf("fun x er value - %p\n", &x);
}

int main()
{
    int x = 100;
    printf("main x er value - %p\n", &x);
    fun(x);
}