#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k = n;
    for (int i = 1; i <= n; i++)
    {

        for (int d = 1; d < i; d++)
        {
            printf("  ");
        }

        for (int s = (k * 2) - 1; s > 0; s--)
        {
            printf("* ");
        }
        k--;
        printf("\n");
    }
}

// 3
// * * * * *
//   * * *
//     *