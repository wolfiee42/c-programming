#include <stdio.h>

int summation(int x, int y)
{
    return x + y;
}
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int result = summation(m, n);
    printf("%d\n", result);
    return 0;
}