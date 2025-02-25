#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int firstNum = a / 10;
    int secondNum = a % 10;

    if (secondNum != 0)
    {
        if ((firstNum % secondNum == 0 || secondNum % firstNum == 0))
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("YES");
    }
}