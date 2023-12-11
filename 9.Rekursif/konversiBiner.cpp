#include <iostream>
#include <string>

using namespace std;

string biner(int num)
{
    if (num == 1)
    {
        return "1";
    }
    else if (num % 2 == 1)
    {
        return biner(num / 2) + "1";
    }

    else
    {
        return biner(num / 2) + "0";
    }
}

int main()
{
    int n;
    cin >> n;
    string hasil = biner(n);
    cout << hasil;
}