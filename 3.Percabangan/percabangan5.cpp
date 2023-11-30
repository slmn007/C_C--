#include <cstdio>
#include <cmath>

int main()
{
    float N;
    int F = 0, C = 0;
    scanf("%f", &N);

    if (trunc(N) == N)
    {
        F = trunc(N);
        C = trunc(N);
        printf("%d %d", F, C);
    }
    else if (N > 0)
    {
        F = trunc(N);
        C = trunc(N) + 1;
        printf("%d %d", F, C);
    }
    else
    {
        F = trunc(N) - 1;
        C = trunc(N);
        printf("%d %d", F, C);
    }
}