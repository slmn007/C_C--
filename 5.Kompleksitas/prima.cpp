#include <cstdio>
#include <cmath>

int main()
{
    int n;
    int k;
    int num;
    int hasil;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num == 1)
        {
            printf("BUKAN\n");
        }
        else
        {
            if (num > 10)
            {
                k = sqrt(num);
            }
            else
            {
                k = num;
            }

            for (int j = 2; j < k; j++)
            {
                // printf("%d\n", num % j);
                hasil = num % j;
                // printf("%d", hasil);
                if (hasil == 0)
                {
                    printf("BUKAN\n");
                    break;
                }
            }
            if (hasil != 0)
            {
                printf("YA\n");
            }
        }
    }
}