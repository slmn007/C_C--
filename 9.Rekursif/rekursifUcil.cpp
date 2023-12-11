#include <iostream>

using namespace std;

int rekursifUcil(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else if (num % 2 == 0)
    {
        /* code */
        return (num / 2) * rekursifUcil(num - 1);
    }
    else
    {
        return num * rekursifUcil(num - 1);
    }
}

int main()
{
    int n;
    cin >> n;

    int hasil = rekursifUcil(n);

    cout << hasil;
}