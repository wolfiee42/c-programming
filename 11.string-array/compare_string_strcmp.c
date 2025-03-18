#include <stdio.h>
#include <string.h>

int main()
{
    char stringA[100], stringB[100];
    scanf("%s %s", stringA, stringB);

    int output = strcmp(stringA, stringB);

    if (output > 0)
    {
        printf("B is smaller\n");
    }
    else if (output < 0)
    {
        printf("A is smaller\n");
    }
    else
    {
        printf("Same\n");
    }
    return 0;
}