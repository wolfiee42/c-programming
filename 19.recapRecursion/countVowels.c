#include <stdio.h>
#include <string.h>

int getVowel(char *sentence, int length, int index)
{
    int vowel = 0;
    if (length == index)
        return 0;
    if (sentence[index] == 'A' || sentence[index] == 'E' || sentence[index] == 'I' || sentence[index] == 'O' || sentence[index] == 'U' || sentence[index] == 'a' || sentence[index] == 'e' || sentence[index] == 'i' || sentence[index] == 'o' || sentence[index] == 'u')
    {
        vowel++;
    }
    return vowel + getVowel(sentence, length, index + 1);
}

int main()
{
    char sentence[200];
    fgets(sentence, 200, stdin);

    int length = strlen(sentence);

    // solution 1 - without recursion
    // int vowel = 0;

    // for (int i = 0; i < length; i++)
    // {
    //     if (sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U' || sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u')
    //     {
    //         vowel++;
    //     }
    // }

    // solution 2 - with recursion
    int vowelCount = getVowel(sentence, length, 0);
    printf("%d", vowelCount);
}