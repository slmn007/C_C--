#include <iostream>
#include <string>

using namespace std;

void palindrom(string kata)
{
    int len = kata.length();
    if (len == 1 || len == 0)
    {
        cout << "YA";
    }
    else
    {
        if (kata[0] == kata[len - 1])
        {
            kata.erase(len - 1, 1);
            kata.erase(0, 1);
            palindrom(kata);
        }
        else
        {
            cout << "BUKAN";
        }
    }
}

int main()
{
    string kata;
    cin >> kata;
    palindrom(kata);
}