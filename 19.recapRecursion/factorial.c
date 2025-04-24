#include <stdio.h>

long long int factorial(int n, int i)
{

    if (n < i)
        return 1;
    return i * factorial(n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int factorialNumOfN = factorial(n, 1);
    printf("%lld", factorialNumOfN);
}