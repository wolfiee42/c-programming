#include <stdio.h>
#include <string.h>

int main()
{
    char c[100];
    scanf("%s", c);
    int ind = 0;
    int length = 0;

    while (c[ind] != '\0')
    {
        ind++;
        length++;
    }
    printf("%d\n", length);
}

// int main()
// {
//     char c[100];
//     scanf("%s", c);
//     int size = strlen(c);

//     printf("%d\n", size);
// }