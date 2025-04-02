#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1;
    int star = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = space; j > 0; j--)
        {
            printf(" ");
        }
        space--;

        for (int k = 1; k <= (2 * star) - 1; k++)
        {
            printf("*");
        }
        star++;
        printf("\n");
    }
}