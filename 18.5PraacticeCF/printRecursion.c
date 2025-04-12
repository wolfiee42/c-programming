#include <stdio.h>

void printRecursion(int n, int x)
{
    if (n == x)
        return;
    printf("I love Recursion\n");
    printRecursion(n, x + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printRecursion(n, 0);
}