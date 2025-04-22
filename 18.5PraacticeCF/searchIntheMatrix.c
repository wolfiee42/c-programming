#include <stdio.h>

int searchIntheMatrix(int arr[100][100], int row, int col, int i, int j, int x)
{
    if (row == i)
        return 0;
    if (col == j)
        return searchIntheMatrix(arr, row, col, i + 1, 0, x);
    if (arr[i][j] == x)
        return 1;
    return searchIntheMatrix(arr, row, col, i, j + 1, x);
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int x;
    scanf("%d", &x);

    int flag = searchIntheMatrix(arr, n, m, 0, 0, x);
    if (flag == 0)
        printf("will take number");
    else
        printf("will not take number");
}