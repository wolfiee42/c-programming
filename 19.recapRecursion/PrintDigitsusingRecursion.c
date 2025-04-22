#include <stdio.h>

void printDigit(int number)
{
    if (number < 0)
        return;
    int prevNum = number % 10;
    number = number / 10;
    printDigit(number);
    printf("%d ", prevNum);
}

int main()
{
    int n;
    scanf("%d", &n);

    int number;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number);

        // int num = number;
        // while (1)
        // {
        //     int prevNum = num % 10;
        //     num = num / 10;
        //     printf("%d ", prevNum);
        //     if (num < 1)
        //     {
        //         printf("\n");
        //         break;
        //     }
        // }
        printDigit(number);
    }

    return 0;
}