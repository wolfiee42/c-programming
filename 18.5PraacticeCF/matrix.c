#include <stdio.h>

int primaryDiagonalMatrix(int arr[100][100], int n, int x)
{
    if (x == n)
        return 0;

    return arr[x][x] + primaryDiagonalMatrix(arr, n, x + 1);
}

int secondaryDiagonalMatrix(int arr[100][100], int n, int i, int j)
{
    if (i == n)
        return 0;
    return arr[i][j] + secondaryDiagonalMatrix(arr, n, i + 1, j - 1);
}

int main()
{

    int n;
    scanf("%d", &n);

    int arr[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int pdm = primaryDiagonalMatrix(arr, n, 0);
    int sdm = secondaryDiagonalMatrix(arr, n, 0, n - 1);

    int difference = pdm - sdm;
    if (difference < 0)
    {
        difference = -difference;
    }
    printf("%d\n", difference);
    return 0;
}