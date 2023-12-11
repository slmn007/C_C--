#include <cstdio>

void swap(int p, int q, int posX, int posY, int baris[2][1001])
{
    int temp = baris[p][posX];
    baris[p][posX] = baris[q][posY];
    baris[q][posY] = temp;
    // printf("%d %d %d", temp, baris[p][posX], baris[q][posY]);
}

int main()
{
    int n;
    int baris[2][1001];
    int roll;

    // inisialisasi baris bola pada meja sesuai N
    scanf("%d", &n);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &baris[i][j]);
            // printf("%d ", baris[i][j]);
        }
    }

    // swap
    scanf("%d", &roll);

    for (int i = 0; i < roll; i++)
    {
        char namaBaris1[5], namaBaris2[5];
        int posX, posY;
        scanf("%s %d %s %d", &namaBaris1, &posX, &namaBaris2, &posY);

        int p = namaBaris1[0] - 'A';
        int q = namaBaris2[0] - 'A';

        posX = posX - 1;
        posY = posY - 1;
        // printf("%d %d %d %d \n", p, q, posX, posY);
        swap(p, q, posX, posY, baris);
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", baris[i][j]);
        }
        printf("\n");
    }
}