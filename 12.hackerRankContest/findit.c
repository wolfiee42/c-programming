#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[1001];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }

    printf("%d", count);
}