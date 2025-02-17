#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);

    if (input < 0)
    {
        printf("negative");
        return 0;
    }
    else if (input == 0)
    {
        printf("zero");
    }
    else
    {
        printf("positive");
    }
}