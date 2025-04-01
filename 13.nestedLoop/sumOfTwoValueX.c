#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        // printf("%d", arr[i]);
    }

    int x;
    scanf("%d", &x);

    int flag = 0;

    // solution 01
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] + arr[j] == x)
    //         {
    //             flag = 1;
    //         }
    //     }
    // }

    // solution 02
    int i = 0, j = 0;
    while (i < n + 1)
    {
        j = i + 1;
        while (j < n)
        {
            if (arr[i] + arr[j] == x)
            {
                flag = 1;
                break;
            }
            j++;
        }
        i++;
    }

    if (flag == 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
}