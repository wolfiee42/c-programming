#include <stdio.h>

int main()
{
    char X;
    scanf("%c", &X);

    if (X >= 65 && X <= 90)
    {
        int intTOChar = X + 32;
        printf("%c", intTOChar);
    }
    else if (X >= 97 && X <= 122)
    {
        int intTOChar = X - 32;
        printf("%c", intTOChar);
    }
}