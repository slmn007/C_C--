#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int k;
    cin >> k;

    int lenS = s.length();

    for (int i = 0; i < lenS; i++)
    {
        s[i] = (((s[i] - 'a') + k) % 26) + 'a';
    }
    cout << s.c_str();
}