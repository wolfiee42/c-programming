#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    scanf("%s", word);

    int cnt[26] = {0};
    int k = 0;
    int length = strlen(word);

    for (int i = 0; i < length; i++)
    {
        cnt[word[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        {
            printf("%c - %d\n", i + 'a', cnt[i]);
        }
    }
}