#include <stdio.h>

int getMaxNumber(int *arr, int maxNumber, int index, int length)
{
    if (index == length)
        return maxNumber;
    if (index == 0)
        maxNumber = arr[index];
    if (arr[index] > maxNumber)
        return maxNumber = arr[index];
    return getMaxNumber(arr, maxNumber, index + 1, length);
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

    // solution - 01
    // for (int i = 0; i < n; i++)
    // {
    //     if (i == 0)
    //     {
    //         maxNumber = arr[0];
    //     }
    //     if (arr[i] > maxNumber)
    //     {
    //         maxNumber = arr[i];
    //     }
    // }

    // solution - 02
    int maxNumber = getMaxNumber(arr, 0, 0, n);

    printf("%d", maxNumber);
}