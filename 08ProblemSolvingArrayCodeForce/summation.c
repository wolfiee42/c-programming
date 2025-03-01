#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    long long int summation = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        summation = summation + arr[i];
    }
    if (summation < 0)
    {
        summation *= -1;
    }
    printf("%lld\n", summation);
}