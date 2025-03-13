#include <stdio.h>
#include <string.h>

int main()
{
    char c[100];
    fgets(c, 10, stdin);
    printf("%s", c);
}