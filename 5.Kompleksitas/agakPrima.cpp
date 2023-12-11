#include <cstdio>

int main()
{
    int n;
    int num;
    int hasil;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);

        int a = 0;
        for (int j = 2; j * j <= num; j++)
        {
            // printf("%d\n", a);
            hasil = num % j;
            if (hasil == 0)
            {
                a++;
            }
            // printf("%d\n", hasil);
        }

        if (a > 1 || num < 1)
        {
            printf("BUKAN\n");
        }
        else
        {
            printf("YA\n");
        }
    }
}