#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];

    scanf("%s", str);

    int length = strlen(str);
    int cap = 0;
    int small = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            cap++;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            small++;
        }
    }

    printf("%d %d", cap, small);
}