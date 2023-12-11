#include <iostream>

using namespace std;

int catat[9] = {0};

void brankas(int kedalaman, int num, int k)
{
    if (kedalaman >= k)
    {
        // cetak tombol
        for (int i = 0; i < k; i++)
        {
            cout << catat[i] << " ";
        }
        cout << "\n";
    }
    else
    {
        for (int i = catat[kedalaman - 1] + 1; i <= num; i++)
        {
            catat[kedalaman] = i;
            brankas(kedalaman + 1, num, k);
        }
    }
}

int main()
{
    int n, k;
    cin >> n >> k;

    brankas(0, n, k);
}