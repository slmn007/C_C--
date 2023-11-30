#include <cstdio>

int main()
{
    int N;
    int B;
    int min, max;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &B);

        if (i == 0)
        {
            min = B;
            max = B;
        }
        else
        {
            if (max < B)
            {
                max = B;
            }
            if (min > B)
            {
                min = B;
            }
        }
    }
    printf("%d %d", max, min);
}