#include <iostream>

using namespace std;

int catat[9] = {0};
bool pernah[9] = {false};

void zigzag(int kedalaman, int num)
{
    if (kedalaman >= num)
    {
        bool zigzag = true;

        for (int i = 1; i < num - 1; i++)
        {
            bool condition1 = catat[i] > catat[i - 1] && catat[i] > catat[i + 1];
            bool condition2 = catat[i] < catat[i - 1] && catat[i] < catat[i + 1];
            if (!(condition1 || condition2))
            {
                zigzag = false;
            }
        }

        if (zigzag)
        {
            // Cetak password
            for (int i = 0; i < num; i++)
            {
                cout << catat[i]; // Cetak
            }
            cout << "\n";
        }
    }
    else
    {
        // Masuk ke lapisan lebih dalam
        for (int i = 1; i <= num; i++)
        {
            if (!pernah[i])
            {
                pernah[i] = true;
                catat[kedalaman] = i; // Catat di sini
                zigzag(kedalaman + 1, num);
                pernah[i] = false;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    zigzag(0, n);
}