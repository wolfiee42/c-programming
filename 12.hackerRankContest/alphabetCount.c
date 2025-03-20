#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[1000];
    scanf("%s", sentence);

    int length = strlen(sentence);

    int alphabets[26] = {0};
    for (int i = 0; i < length; i++)
    {
        alphabets[sentence[i] - 'a']++;
    }
    int sum = 0;
    for (int i = 0; i < 26; i++)
    {
        if (i + 'a' == 97 || i + 'a' == 101 || i + 'a' == 105 || i + 'a' == 111 || i + 'a' == 117)
        {
            sum += alphabets[i];
        }
    }
    printf("%d\n", sum);
}
