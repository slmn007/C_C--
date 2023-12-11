#include <cstdio>
#include <cmath>

int tesFungsi(int a, int b, int x)
{
    int temp = abs((a * x) + b);
    // printf("%d", temp);
    return temp;
}

int main()
{
    int a, b, k, x;

    scanf("%d %d %d %d", &a, &b, &k, &x);
    int hasil = x;

    for (int i = 0; i < k; i++)
    {
        hasil = tesFungsi(a, b, hasil);
    }
    printf("%d", hasil);
}