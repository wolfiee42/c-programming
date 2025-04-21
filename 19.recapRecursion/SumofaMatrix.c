#include <stdio.h>

void sumOfaMatrix(int arr1[100][100], int arr2[100][100], int n, int m, int i, int j)
{
    if (i == n)
        return;
    if (j == m)
    {
        printf("\n");
        return sumOfaMatrix(arr1, arr2, n, m, i + 1, 0);
    }

    printf("%d ", arr1[i][j] + arr2[i][j]);

    sumOfaMatrix(arr1, arr2, n, m, i, j + 1);
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr1[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    int arr2[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    // solution 01 - without recursion

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         printf("%d ", arr1[i][j] + arr2[i][j]);
    //     }
    //     printf("\n");
    // }

    // solution02 - recursion
    sumOfaMatrix(arr1, arr2, n, m, 0, 0);
    return 0;
}