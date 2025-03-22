#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    scanf("%s", str);

    int length = strlen(str);

    int alphabets[26] = {0};
    for (int i = 0; i < length; i++)
    {
        alphabets[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 'a', alphabets[i]);
    }
}