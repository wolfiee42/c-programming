#include <stdio.h>
#include <string.h>

int main()
{
    char numbers[1000001];
    scanf("%s", numbers);

    int i = 0;
    int sum = 0;
    int size = strlen(numbers);
    while (i < size)
    {
        sum += (numbers[i] - 48);
        i++;
    }
    printf("%d\n", sum);
}