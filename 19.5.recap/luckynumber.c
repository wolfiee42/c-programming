#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int index = 0;
    int smallestNumber = 0;
    while (index < n)
    {
        if (index == 0)
        {
            smallestNumber = arr[index];
        }
        if (arr[index] < smallestNumber)
        {
            smallestNumber = arr[index];
        }
        index++;
    }

    int indexx = 0;
    int count = 0;
    while (indexx < n)
    {
        if (arr[indexx] == smallestNumber)
        {
            count++;
        }
        indexx++;
    }

    if (count % 2 == 0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }
}