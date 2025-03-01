#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arrOfNum[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrOfNum[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arrOfNum[i] >= 2)
        {
            arrOfNum[i] = 1;
        }
        else if (arrOfNum[i] < 0)
        {
            arrOfNum[i] = 2;
        }
        else
        {
            arrOfNum[i] = arrOfNum[i];
        }

        printf("%d ", arrOfNum[i]);
    }
}