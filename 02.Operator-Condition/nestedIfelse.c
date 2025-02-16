#include <stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 5000)
    {
        printf("Cox's bazar jabo\n");
        if (tk >= 10000)
        {
            printf("saint martin jabo");
        }
        else
        {
            printf("Ferot jabo.\n");
        }
    }
    else
    {
        printf("Kuthao jabo na");
    }
}