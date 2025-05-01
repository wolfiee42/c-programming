#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int line[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &line[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n ; j++)
        {
            if (line[i] > line[j])
            {
                int temp = line[i];
                line[i] = line[j];
                line[j] = temp;
            }
        }
    }


    if (n % 2 == 0)
    {
        printf("%d %d\n", line[(n / 2) - 1], line[n / 2]);
    }
    else if (n % 2 == 1)
    {
        printf("%d \n", line[n / 2]);
    }
}