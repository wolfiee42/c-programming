#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int m = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = m; k > 0; k--)
        {
            printf(" ");
        }
        m--;
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
