#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    char mark = '_';

    for (int i = 0; i < s.length(); i++)
    {
        if (int(s[i]) >= 65 && int(s[i]) <= 90)
        {
            s.insert(i, "_");
            s[i + 1] -= 'A' - 'a';
        }
        else if (s[i] == mark)
        {
            s[i + 1] -= 'a' - 'A';
            s.erase(i, 1);
        }
    }
    cout << s.c_str();
}