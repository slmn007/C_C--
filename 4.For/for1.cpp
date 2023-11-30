#include <cstdio>

int main()
{
    int num;
    int total = 0;

    while (scanf("%d", &num) != EOF)
    {
        /* code */
        total += num;
    }
    printf("%d\n", total);
}