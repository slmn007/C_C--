#include <iostream>

using namespace std;

int arr[25][25];
bool visit[25][25] = {false};
int hasil = 0;

void jawbreak(int x, int y, int b, int k)
{
    // cout << x << " | " << y << " | " << b << " | " << k << "\n";
    if (x >= 0 && x <= 24 && y >= 0 && y <= 24)
    {
        // cout << visit[x][y] << "| false or true \n";
        if (!visit[x][y])
        {
            // cout << arr[x][y] << " | " << arr[b][k] << "\n";
            visit[x][y] = true;
            if (arr[x][y] == arr[b][k])
            {
                hasil++;
                jawbreak(x, y - 1, b, k); // kiri - (y - 1)
                jawbreak(x, y + 1, b, k); // kanan + (y + 1)
                jawbreak(x - 1, y, b, k); // atas - (x - 1)
                jawbreak(x + 1, y, b, k); // bawah+ (x + 1)
            }
            // visit[x][y] = false;
        }
    }
}

int main()
{
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int b, k;
    cin >> b >> k;

    jawbreak(b, k, b, k);

    cout << hasil * (hasil - 1);
}