#include <stdio.h>
#include <string.h>

int main()
{
    char input[1000000];

    fgets(input, 1000000, stdin);

    int i = 0;
    while (input[i] != '\\')
    {
        printf("%c", input[i]);
        i++;
    }
    printf("\n");
}
