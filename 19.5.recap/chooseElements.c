#include <stdio.h>
#define ll long long
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    ll maximumSum = 0;

    for (int i = 0; i < k; i++)
    {
        if (a[i] < 0)
        {
            maximumSum += 0;
        }
        else
        {
            maximumSum += a[i] * 1ll;
        }
    }
    printf("%lld ", maximumSum);
}