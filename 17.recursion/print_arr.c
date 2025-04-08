#include <stdio.h>

void print(int arr[], int sz, int index)
{
    if (index == sz)
        return;
    printf("%d\n", arr[index]);
    print(arr, sz, index + 1);
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

    print(arr, n, 0);
}