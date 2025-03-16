#include <stdio.h>
#include <string.h>

int main()
{
    char wordOne[1001], wordTwo[1001];

    scanf("%s %s", wordOne, wordTwo);

    int word1Length = strlen(wordOne);
    int word2Length = strlen(wordTwo);

    printf("%d %d\n", word1Length, word2Length);
    printf("%s %s\n", wordOne, wordTwo);
    return 0;
}
