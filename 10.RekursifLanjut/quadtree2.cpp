#include <iostream>
#include <string>

using namespace std;

int m[128][128];
int nJawaban;
string jawaban[128 * 128];

void quadtree2(int baris, int kolom, int k, string s, string jawaban, int idx)
{

    // cout << jawaban << " | " << s << "\n";
    if (jawaban.length() == s.length())
    {
        for (int i = baris; i < baris + k; i++)
        {
            for (int j = kolom; j < kolom + k; j++)
            {
                m[i][j] = 1;
            }
        }
    }
    else
    {
        // masuk ke Belahan
        if (jawaban[idx] == '0')
        {
            idx++;
            quadtree2(baris, kolom, k / 2, s + "0", jawaban, idx);
        }
        if (jawaban[idx] == '1')
        {
            idx++;
            quadtree2(baris, kolom + (k / 2), k / 2, s + "1", jawaban, idx);
        }
        if (jawaban[idx] == '2')
        {
            idx++;
            quadtree2(baris + (k / 2), kolom, k / 2, s + "2", jawaban, idx);
        }
        if (jawaban[idx] == '3')
        {
            idx++;
            quadtree2(baris + (k / 2), kolom + (k / 2), k / 2, s + "3", jawaban, idx);
        }
    }
}

int main()
{
    // inputan jawaban user
    cin >> nJawaban;
    for (int i = 0; i < nJawaban; i++)
    {
        cin >> jawaban[i];
    }

    // inisialisasi ukuran matrix dari user
    int r, c;
    cin >> r >> c;

    // penyamaan ukuran matrix
    int maxRc = max(r, c);
    int pow2 = 1;
    while (pow2 < maxRc)
    {
        pow2 *= 2;
    }
    // cout << pow2;

    // inisialisasi isi matrix dengan 0
    for (int i = 0; i < pow2; i++)
    {
        for (int j = 0; j < pow2; j++)
        {
            m[i][j] = 0;
        }
    }

    // rekursif
    for (int i = 0; i < nJawaban; i++)
    {
        int idx = 0;
        jawaban[i] = jawaban[i].erase(0, 1);
        quadtree2(0, 0, pow2, "", jawaban[i], idx);
    }

    // cetak jawaban
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
}