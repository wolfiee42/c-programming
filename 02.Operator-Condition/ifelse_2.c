#include <stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 100)
    {
        printf("Burger khabo");
    }
    else if (tk >= 50)
    {
        printf("Fuchka Khabo");
    }
    else if (tk >= 20)
    {
        printf("Ice Cream khabo.");
    }
    else
    {
        printf("Kichu kabo na");
    }
    return 0;
}