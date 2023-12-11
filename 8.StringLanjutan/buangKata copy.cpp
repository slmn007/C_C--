#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int lenT = t.length();

    while (s.find(t) != -1)
    {
        // cout << s << "\n";
        s.erase(s.find(t), lenT);
    }
    cout << s << "\n";
}