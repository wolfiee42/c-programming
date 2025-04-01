#include <stdio.h>
#include <string.h>

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        // printf("%d", arr[i]);
    }

    // solution 01
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 1; j < 5; j++)
    //     {
    //         if (arr[i] + arr[j] == 8)
    //         {
    //             printf("ind %d ind %d", i, j);
    //             break;
    //         }
    //     }
    // }

    // solution 02
    int x = 0, y = 1;
    while (x < 7)
    {
        while (y < 7)
        {
            if (arr[x] + arr[y] == 8)
            {
                printf("ind %d ind %d", x, y);
                break;
            }
            y++;
        }
        x++;
    }
}