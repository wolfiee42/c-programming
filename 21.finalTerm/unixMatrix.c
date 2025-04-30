#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (matrix[i][j] != 1)
                    flag = 1;
            }
            else if (i != j)
            {
                if (matrix[i][j] != 0)
                    flag = 1;
            }
        }
    }

    if (flag == 1)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}