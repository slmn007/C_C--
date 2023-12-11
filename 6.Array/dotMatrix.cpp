#include <cstdio>

int main()
{
    int n, m, p;
    scanf("%d %d %d", &n, &m, &p);

    int num;
    int arrA[n][m], arrB[m][p], hasil[n][p];

    // input matrix A
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &num);
            arrA[i][j] = num;
        }
    }

    // input matrix B
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%d", &num);
            arrB[i][j] = num;
        }
    }

    // perkalian Matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            int temp = 0;
            for (int k = 0; k < m; k++)
            {
                // printf("%d %d || %d %d\n", i, k, k, j);
                temp = temp + (arrA[i][k] * arrB[k][j]);
            }
            // printf("%d\n", temp);
            hasil[i][j] = temp;
        }
    }

    // print hasil
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
}