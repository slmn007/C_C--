#include <cstdio>

int main()
{
    int N;

    scanf("%d", &N);

    while (N % 2 == 0)
    {
        N = N / 2;
    }
    if (N == 1)
    {
        printf("ya");
    }
    else
    {
        printf("bukan");
    }
}