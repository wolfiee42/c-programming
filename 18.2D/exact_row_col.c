#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int e;
    scanf("%d", &e);

    // row
    // for (int i = 0; i < m; i++)
    // {
    //     printf("%d ", arr[e][i]);
    // }

    // column
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i][e]);
    }
}