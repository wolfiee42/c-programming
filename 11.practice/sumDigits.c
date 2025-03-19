#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char numbers[1000001];
    scanf("%s", numbers);

    int i = 0;
    int sum = 0;

    while (i < n)
    {
        sum += (numbers[i] - '0');
        i++;
    }
    printf("%d", sum);
}