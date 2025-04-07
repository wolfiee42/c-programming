#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k = 1;
    int m = n - 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {

        // space
        for (int i = m; i > 0; i--)
        {
            printf(" ");
        }

        // number
        for (int j = 1; j <= 2 * k - 1; j++)
        {
            printf("%d", j);
        }

        if (i < n)
        {
            k++;
            m--;
        }
        else
        {
            k--;
            m++;
        }
        printf("\n");
    }
    return 0;
}
