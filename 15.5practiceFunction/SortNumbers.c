#include <stdio.h>

void sort(int *arr, int sz)
{
    for (int i = 0; i < sz - 1; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < sz; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void print(int x, int y, int z)
{
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
}

int main()
{
    int m, n, o;
    scanf("%d %d %d", &m, &n, &o);

    int arr[3] = {m, n, o};
    sort(arr, 3);
    printf("\n");
    print(m, n, o);

    return 0;
}