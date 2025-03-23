#include <stdio.h>

int main()
{
    int M1, M2, D;

    scanf("%d %d %d", &M1, &M2, &D);

    int n = (D * M1) / M2;

    // printf("%0.f\n", n);
    printf("%d\n", n);
}