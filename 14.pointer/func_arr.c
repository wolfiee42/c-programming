#include <stdio.h>

void fun(int *arr, int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int sz = sizeof(arr) / sizeof(int);
    fun(arr, sz);
}