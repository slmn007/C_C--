#include <cstdio>

int main()
{
    int n;
    int resetter = 0;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (resetter > 9)
            {
                resetter = 0;
            }
            printf("%d", resetter);
            resetter++;
        }
        printf("\n");
    }
}