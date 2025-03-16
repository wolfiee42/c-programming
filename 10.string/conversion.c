#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[100001];
    fgets(sentence, sizeof(sentence), stdin);

    int index = 0;
    int length = strlen(sentence);

    while (index < length)
    {
        if (sentence[index] == 44)
        {
            sentence[index] = 32;
        }
        else if (sentence[index] >= 65 && sentence[index] <= 90)
        {
            sentence[index] += 32;
        }
        else if (sentence[index] >= 97 && sentence[index] <= 122)
        {
            sentence[index] -= 32;
        }
        index++;
    }
    printf("%s", sentence);
}