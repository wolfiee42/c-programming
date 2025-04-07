#include <stdio.h>

void minNmax(int *arr, int n)
{
    int min = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            min = arr[i];
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d %d", min, max);
}
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    minNmax(arr, n);
    return 0;
}