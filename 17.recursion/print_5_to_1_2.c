#include <stdio.h>

void printBackdown(int n)
{
    if (n == 6)
        return;
    printBackdown(n + 1);
    printf("%d\n", n);
}

int main()
{
    int n;
    scanf("%d", &n);
    printBackdown(n);
}