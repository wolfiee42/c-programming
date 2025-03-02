#include <stdio.h>

int main()
{
    int length;
    scanf("%d", &length);

    int arrOfNum[length];
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arrOfNum[i]);
    }

    int lowestNum = arrOfNum[0];
    int position = 1;

    for (int i = 0; i < length; i++)
    {
        if (arrOfNum[i] < lowestNum)
        {
            lowestNum = arrOfNum[i];
            position = i + 1;
        }
    }
    printf("%d %d\n", lowestNum, position);
}