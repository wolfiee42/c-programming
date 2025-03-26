#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k = n - 1;
    int l = 1;

    for (int i = 1; i <= ((2 * n) - 1); i++)
    {

        for (int j = 1; j <= k; j++)
        {
            printf("  ");
        }

        for (int v = 1; v <= l; v++)
        {
            printf("x ");
        }

        printf("\n");

        if (i <= n - 1)
        {
            k--;
            l = l + 2;
        }
        else
        {
            k++;
            l = l - 2;
        }
    }
}

// 3
//     x
//   x x x
// x x x x x
//   x x x
//     x