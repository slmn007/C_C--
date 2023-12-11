#include <cstdio>

int main()
{
    int N, arr[100];

    while (scanf("%d", &arr[N]) != EOF)
    {
        N++;
    }

    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
}