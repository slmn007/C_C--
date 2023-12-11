#include <iostream>

using namespace std;

void draw(int n)
{
    if (n == 1)
    {
        cout << "*\n";
    }
    else
    {
        draw(n - 1);
        for (int i = 0; i < n; i++)
        {
            cout << "*";
        }
        cout << "\n";
        draw(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    draw(n);
}