// + - * / %

#include <stdio.h>

int main()
{
    int a = 30, b = 11;

    // +
    int addition = a + b;

    // -
    int minus = a - b;

    // *
    int multiply = a * b;

    // /
    int division = a / b;
    float division02 = a * 1.0 / b;

    // %
    int module = a % b;

    printf("%d", module);
}