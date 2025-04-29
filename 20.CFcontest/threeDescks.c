#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a, b, c;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        int sum = a + b + c;
        int avg = sum / 3;
        if (a > avg || b > avg)
        {
            printf("NO\n");
        }
        else if (sum % 3 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
