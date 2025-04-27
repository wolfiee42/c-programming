#include <stdio.h>
#include <string.h>
int main()
{
    char word[1000];
    scanf("%s", word);

    int length = strlen(word);
    int index = 0;
    int lastNum = length - 1;
    int flag = 0;
    while (1)
    {
        if (index >= lastNum)
            break;
        if (word[index] != word[lastNum])
        {
            flag = 1;
        }
        index++;
        lastNum--;
    }

    if (flag == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}