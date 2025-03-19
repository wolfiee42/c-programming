#include <stdio.h>
#include <string.h>

int main()
{
    int a[2];
    scanf("%d %d", &a[0], &a[1]); // a[0]=10 a[1]=5

    int listOfNum[a[0]];

    for (int i = 0; i < a[0]; i++)
    {
        scanf("%d", &listOfNum[i]); // 1 2 3 4 5 3 2 1 5 3
                                    // 0 1 2 3 4 5 6 7 8 9  <- index
    }

    int cnt[100001] = {0}; // 0 0 0 0 0 0
                           // 0 1 2 3 4 <- index
    for (int i = 0; i < a[0]; i++)
    {
        cnt[listOfNum[i]]++;
    }

    for (int i = 1; i <= a[1]; i++)
    {
        printf("%d\n", cnt[i]);
    }
}
