#include <stdio.h>
#include <string.h>

int main()
{
    char a[200], b[100];
    scanf("%s %s", a, b);

    int bLength = strlen(b);

    int k = strlen(a);

    for (int i = 0; i < bLength; i++)
    {
        a[k] = b[i];
        k++;
    }
    printf("%s\n", a);
    return 0;
}