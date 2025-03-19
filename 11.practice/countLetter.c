#include <stdio.h>
#include <string.h>

int main()
{
    char input[10000001];
    scanf("%s", input);

    int len = strlen(input);
    int cnt[26] = {0}; // this array will be int instead of char. because this array is actually honding counts not characters.

    for (int i = 0; i < len; i++)
    {
        cnt[input[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] > 0)
        {
            printf("%c : %d\n", 'a' + i, cnt[i]);
        }
    }
    return 0;
}
