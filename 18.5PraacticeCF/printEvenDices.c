#include <stdio.h>

void printEvenDices(int *arr, int n, int x)
{
    if (n <= x)
        return;
    printEvenDices(arr, n, x + 2);
    printf("%d ", arr[x]);
}

int main()
{
    int n;
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printEvenDices(array, n, 0);
    return 0;
}