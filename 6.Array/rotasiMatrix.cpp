#include <cstdio>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int num;
    int arr[n][m];

    // isi matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &num);
            arr[i][j] = num;
        }
    }

    // rotasi matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}