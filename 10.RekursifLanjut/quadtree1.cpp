#include <iostream>
#include <string>

using namespace std;

int m[128][128];
int nJawaban;
string jawaban[128 * 128];

// Cek apakah submatrix [r, c, r+k-1, c+k-1] sudah homogen
bool homogen(int baris, int kolom, int k)
{
    int val = m[baris][kolom]; // dapetin parameter homogen
    // pengecekan parameter
    for (int i = baris; i < baris + k; i++)
    {
        for (int j = kolom; j < kolom + k; j++)
        {
            if (m[i][j] != val) // jika !homegen, false
            {
                return false;
            }
        }
    }
    return true;
}

void quadtree(int baris, int kolom, int k, string s)
{
    if (homogen(baris, kolom, k))
    {
        if (m[baris][kolom] == 1)
        {
            jawaban[nJawaban] = "1" + s;
            nJawaban++;
        }
    }
    else
    {
        // Belah
        quadtree(baris, kolom, k / 2, s + "0");
        quadtree(baris, kolom + (k / 2), k / 2, s + "1");
        quadtree(baris + (k / 2), kolom, k / 2, s + "2");
        quadtree(baris + (k / 2), kolom + (k / 2), k / 2, s + "3");
    }
}

int main()
{
    int r, c;
    cin >> r >> c;

    int maxRc = max(r, c);
    int pow2 = 1;
    while (pow2 < maxRc)
    {
        pow2 *= 2;
    }
    // cout << pow2;

    // inisialisasi matrix
    for (int i = 0; i < pow2; i++)
    {
        for (int j = 0; j < pow2; j++)
        {
            m[i][j] = 0;
        }
    }

    // inputan user
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> m[i][j];
        }
    }

    // rekursif
    nJawaban = 0;
    quadtree(0, 0, pow2, "");

    // cetak jawaban
    cout << nJawaban << "\n";
    for (int i = 0; i < nJawaban; i++)
    {
        cout << jawaban[i] << "\n";
    }
}