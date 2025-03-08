#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int changableNum[2];
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &changableNum[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (i == changableNum[0])
        {
            printf("%d ", changableNum[1]);
        }
        else
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}