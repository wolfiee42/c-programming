#include <stdio.h>

long long int summation(int *arr, int n, int x)
{
    if (n <= x)
        return 0;
    long long int sum = summation(arr, n, x + 1);
    sum = arr[x] + sum;
    return sum;
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

    long long int sum = summation(arr, n, 0);
    printf("%lld\n", sum);
}