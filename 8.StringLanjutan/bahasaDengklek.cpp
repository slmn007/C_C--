#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (int(s[i]) >= 97 && int(s[i]) <= 122)
        {
            s[i] -= 'a' - 'A';
        }
        else
        {
            s[i] -= 'A' - 'a';
        }
    }
    printf("%s\n", s.c_str());
}