#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int games[2];
    int tiger = 0, pathan = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &games[0], &games[1]);
        if (games[0] > games[1])
        {
            tiger++;
        }
        else if (games[0] < games[1])
        {
            pathan++;
        }
        else
        {
            tiger++;
            pathan++;
        }
    }

    if (tiger > pathan)
    {
        printf("Tiger\n");
    }
    else if (tiger < pathan)
    {
        printf("Pathan\n");
    }
    else
    {
        printf("Draw\n");
    }
}