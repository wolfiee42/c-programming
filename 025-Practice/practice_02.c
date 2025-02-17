#include <stdio.h>

int main()
{
    int a;
    int b;

    scanf("%d %d", &a, &b);

    // add
    int add = a + b;
    printf("%d + %d = %d\n", a, b, add);

    // minus
    int minus = a - b;
    printf("%d - %d = %d\n", a, b, minus);

    // multi
    int multi = a * b;
    printf("%d * %d = %d\n", a, b, multi);

    // div
    float div = a * 1.0 / b;
    printf("%d / %d = %0.2f\n", a, b, div);
}