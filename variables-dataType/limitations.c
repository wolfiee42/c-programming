#include <stdio.h>

int main()
{

    // [int and long] [long int d v lld]
    int a;
    a = 1000000000; // working
    // a = 10000000000; // not working, because of (2^n -1)

    long long int b;
    b = 100000000000000000; // working

    // printf("%d", a);
    // printf("%lld", b);

    // [float and double] [float(f) v long float(lf)]
    float c;
    // c = 23.3450988989; // 8byte

    double d = 234.5434876784;

    // printf("%f", c);
    printf("%0.15lf", d);
    return 0;
}