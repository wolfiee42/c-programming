#include <stdio.h>

void printFrom1toN(int n, int x)
{
    if (x > n)
        return;

    printFrom1toN(n, x + 1);

    printf("%d", x);
    if (x != 1)
    {
        printf(" ");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printFrom1toN(n, 1);
}