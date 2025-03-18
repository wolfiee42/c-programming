#include <stdio.h>
#include <string.h>

int main()
{
    char wordOne[100], wordTwo[100];
    scanf("%s %s", wordOne, wordTwo);

    // int lengthTwo = strlen(wordTwo);

    // for (int i = 0; i <= lengthTwo; i++)
    // {
    //     wordOne[i] = wordTwo[i];
    // }
    strcpy(wordOne, wordTwo);
    printf("%s %s", wordOne, wordTwo);
    return 0;
}