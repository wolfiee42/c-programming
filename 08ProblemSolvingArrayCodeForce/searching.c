#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    long long int number;
    scanf("%lld", &number);

    for (long long int i = 0; i < n; i++)
    {
        if (arr[i] == number)
        {
            printf("%lld\n", i);
            return 0;
        }
    }
    printf("%d\n", -1);
}