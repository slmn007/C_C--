#include <cstdio>
#include <cmath>

int main()
{
    int n, d;
    scanf("%d %d", &n, &d);

    int arr[n][2];
    int x, y;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        arr[i][0] = x;
        arr[i][1] = y;
    }

    int hasil = 0;
    int min = 0;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // printf("%d %d\n", i, j);
            hasil = pow(abs(arr[j][0] - arr[i][0]), d) + pow(abs(arr[j][1] - arr[i][1]), d);
            // printf("%d |", hasil);
            if (i == 0 && j == 1)
            {
                min = hasil;
                max = hasil;
            }
            else
            {
                if (max < hasil)
                {
                    max = hasil;
                }
                if (min > hasil)
                {
                    min = hasil;
                }
            }
        }
        // printf("%d %d\n", min, max);
    }

    printf("%d %d", min, max);
}