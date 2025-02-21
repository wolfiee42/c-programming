#include <stdio.h>

int main()
{
    int lines;
    scanf("%d", &lines);

    int initNum = 0;

    int lastNumOfArr = 0;

    int i;
    for (i = 1; i <= lines; i++)
    {
        scanf("%d", &initNum);
        if (initNum == 0)
        {
            printf("%d", initNum);
        }
        while (initNum > 0)
        {
            lastNumOfArr = initNum % 10;
            initNum = initNum / 10;
            printf("%d ", lastNumOfArr);
        }
        printf("\n");
    }
}
