#include <stdio.h>

void printFrom1toN(int n, int x)
{
    if (x > n)
        return;
    printf("%d\n", x);
    printFrom1toN(n, x + 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    printFrom1toN(n, 1);
}