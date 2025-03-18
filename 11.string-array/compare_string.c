#include <stdio.h>
#include <string.h>

int main()
{
    char stringA[100], stringB[100];
    scanf("%s %s", stringA, stringB);

    int index = 0;
    while (1)
    {
        if (stringA[index] == '\0' && stringB[index] == '\0')
        {
            printf("Same\n");
            break;
        }
        else if (stringA[index] == '\0')
        {
            printf("A Choto\n");
            break;
        }
        else if (stringB[index] == '\0')
        {
            printf("B Choto\n");
            break;
        }

        if (stringA[index] == stringB[index])
        {
            index++;
        }
        else if (stringA[index] < stringB[index])
        {
            printf("A Choto\n");
            break;
        }
        else if (stringA[index] > stringB[index])
        {
            printf("B Choto\n");
            break;
        }
    }
}