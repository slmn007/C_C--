#include <iostream>
#include <cmath>

using namespace std;

int tesFungsi(int a, int b, int x, int k)
{
    if (k < 1)
    {
        return x;
    }
    else
    {
        return pow(k, 0) * abs((a * tesFungsi(a, b, x, k - 1)) + b);
    }
}

int main()
{
    int a, b, k, x;
    cin >> a >> b >> k >> x;
    int hasil = tesFungsi(a, b, x, k);
    cout << hasil;
}