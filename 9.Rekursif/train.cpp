#include <iostream>

using namespace std;

int faktorial(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return x * faktorial(x - 1);
    }
}

int main()
{
    int n;
    cin >> n;

    cout << n << "! = " << faktorial(n);
}