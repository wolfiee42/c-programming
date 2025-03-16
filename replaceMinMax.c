#include <stdio.h>
#include <string.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int minimumNum, min_ind, maximumNum, max_ind;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            minimumNum = arr[i];
            min_ind = i;
            maximumNum = arr[i];
            max_ind = i;
        }

        if (arr[i] < minimumNum)
        {
            minimumNum = arr[i];
            min_ind = i;
        }
        else if (arr[i] > maximumNum)
        {
            maximumNum = arr[i];
            max_ind = i;
        }
    }
    arr[min_ind] = maximumNum;
    arr[max_ind] = minimumNum;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
