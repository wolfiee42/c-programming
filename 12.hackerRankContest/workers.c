#include <stdio.h>

int main()
{
    int M1, M2, D;

    scanf("%d %d %d", &M1, &M2, &D);

    float n = M1 / M2;

    float D2 = D * n;

    // printf("%0.f\n", n);
    printf("%0.f\n", D2);
}