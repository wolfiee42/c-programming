#include <stdio.h>

int array_length(char array[], int x)
{
    if (array[x] == '\0')
        return 0;

    int length = array_length(array, x + 1);
    return length + 1;
}

int main()
{
    char string[100] = "howareyougoingtoday";

    int length = array_length(string, 0);
    printf("%d", length);

    return 0;
}