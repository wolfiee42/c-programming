#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[1000];
    fgets(sentence, 1000, stdin);

    int length = strlen(sentence);
    int capital = 0;
    int small = 0;
    int space = 0;

    for (int i = 0; i < length; i++)
    {
        if (sentence[i] >= 'A' && sentence[i] <= 'Z')
        {
            capital++;
        }
        else if (sentence[i] >= 'a' && sentence[i] <= 'z')
        {
            small++;
        }
        else if (sentence[i] == ' ')
        {
            space++;
        }
    }

    printf("Capital - %d\n", capital);
    printf("Small - %d\n", small);
    printf("Spaces - %d\n", space);
}