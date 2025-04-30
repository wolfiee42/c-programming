    #include <stdio.h>

    int main()
    {
        int t;
        scanf("%d", &t);
        int d, a, b, c;
        for (int i = 0; i < t; i++)
        {
            scanf("%d %d %d %d", &d, &a, &b, &c);
            int remaining = (d - (a + b + c));
            printf("%d\n", remaining);
        }
    }