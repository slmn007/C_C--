#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // printf("%d %d %d\n", i, j, n - j);
            if (j < n - i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
                if (j % n == 0)
                {
                    printf("\n");
                    break;
                }
            }
        }
    }
}