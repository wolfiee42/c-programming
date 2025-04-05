#include <stdio.h>
#include <string.h>

void fun(char *word)
{
    int sz = strlen(word);
    printf("%d", sz);
}

int main()
{
    char word[20] = "mobile";
    fun(word);
    return 0;
}