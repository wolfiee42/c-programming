#include <stdio.h>
#include <string.h>

int main()
{
    char word[1000];
    scanf("%s", word);

    int length = strlen(word);
    int ind = 0;
    int lasInd = length - 1;
    while (ind < length)
    {
        if (word[ind] == word[lasInd])
        {
            ind++;
            lasInd--;
        }
        else if (word[ind] != word[lasInd])
        {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
}