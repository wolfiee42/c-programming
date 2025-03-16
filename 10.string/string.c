#include <stdio.h>
#include <string.h>
int main()
{
    char firstWord[11], secondWord[11];

    scanf("%s %s", firstWord, secondWord);

    int lengthA = strlen(firstWord);
    int lengthB = strlen(secondWord);

    char thirdWord[22];
    int lengthC = lengthA;
    for (int i = 0; i < lengthA + lengthB; i++)
    {
        thirdWord[i] = firstWord[i];
    }
    for (int i = 0; i < lengthB; i++)
    {
        thirdWord[lengthC] = secondWord[i];
        lengthC++;
    }
    thirdWord[lengthC] = '\0';

    char temp[10];
    temp[0] = firstWord[0];
    firstWord[0] = secondWord[0];
    secondWord[0] = temp[0];
    firstWord[lengthA] = '\0';
    secondWord[lengthB] = '\0';

    printf("%d %d\n", lengthA, lengthB);
    printf("%s\n", thirdWord);
    printf("%s %s\n", firstWord, secondWord);
}