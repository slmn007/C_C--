#include <iostream>
#include <string>

using namespace std;

int banyak(int x)
{
    if (x < 0)
    {
        return 0;
    }
    else
    {
        return x + banyak(x - 2);
    }
}

void draw(int x)
{
    if (x > 0)
    {
        draw(x - 1);
        for (int i = 0; i < x; i++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int jabatan(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b % 2 == 1)
    {
        return a * jabatan(a, b - 1);
    }
    else
    {
        int temp = jabatan(a, b / 2);
        return temp * temp;
    }
}

int kardus(int a, int b)
{
    if (a > b)
    {
        return 1 + kardus(a - 1, b);
    }
    else if (a < b)
    {
        return 1 + kardus(a, b - 1);
    }
    else
    {
        return a + b;
    }
}

int ekor(int a, int b, int t)
{
    if (b == 0)
    {
        return t;
    }
    else
    {
        return ekor(a, b - 1, t * a);
    }
}

void majuMundur(string str, int i)
{
    if (i == str.size() - 1)
    {
        printf("%c\n", str[i]);
    }
    else
    {
        printf("%c\n", str[i]);
        majuMundur(str, i + 1);
        printf("%c\n", str[i]);
    }
}

// "Janjikan" pembuatan fungsi terlebih dahulu
int ping(int a);
int pong(int a);

int ping(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else
    {
        return 1 + pong(a - 1);
    }
}

int pong(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else
    {
        return 2 + ping(a - 1);
    }
}

string wolo(string s, int i)
{
    if (s.size() == i)
    {
        return "";
    }
    else
    {
        return s[s.size() - i - 1] + wolo(s, i + 1);
    }
}

int jdd(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else
    {
        return jdd(x / 100) + (x % 100);
    }
}

int janji(int p, int q, int t)
{
    if (p == q)
    {
        return t;
    }
    else if (t % 2 == 1)
    {
        return 2 + janji(p + 1, q, t + 1);
    }
    else
    {
        return 2 + janji(p, q - 1, t + 1);
    }
}

int main()
{
    // draw(4);
    // majuMundur("bebek", 0);
    int hasil = janji(10, 8, 0);
    cout << hasil;
}