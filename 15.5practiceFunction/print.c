#include <stdio.h>

void print(int x)
{
    for (int i = 1; i <= x; i++)
    {
        if (i < x)
        {
            printf("%d ", i);
        }
        else
        {
            printf("%d", i);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    print(n);
    return 0;
}