#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int space = n - 1;

    for (int i = 0; i < n; i++)
    {
        for (int k = (space - i) ; k > 0; k--)
        {
            printf(" ");
        }
        for (int j = 0; j < (i * 2) + 1; j++)
        {
            if (i % 2 == 0)
            {
                printf("^");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}