#include <iostream>

using namespace std;

void batang(int x)
{
    if (x == 0)
    {
        printf("daun\n");
    }
    else
    {
        batang(x - 1);
        batang(x - 1);
    }
}

void rindang(int x)
{
    if (x > 0)
    {
        for (int i = 0; i < x; i++)
        {
            rindang(x - 1);
        }
    }
}

#include <string>

int N = 5;
int arr[5];

bool wow(int i, int t)
{
    if (i >= N)
    {
        return t == 0;
    }
    else
    {
        return wow(i + 1, t - arr[i]) || wow(i + 1, t);
    }
}

void gali(int x)
{
    printf("%d_", x);
    if (x > 1)
    {
        gali(x / 4);
        gali(x / 2);
    }
    printf("%d_", -x);
}

int main()
{
    // arr[0] = 1;
    // arr[1] = 3;
    // arr[2] = 5;
    // arr[3] = 8;
    // arr[4] = 11;

    // printf("%d\n", wow(0, 2));
    // printf("%d\n", wow(0, 6));
    // printf("%d\n", wow(0, 9));
    gali(4);
}