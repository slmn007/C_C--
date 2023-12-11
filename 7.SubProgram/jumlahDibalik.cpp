#include <cstdio>

int reverse(int num)
{
    int temp = num;
    int ret = 0;

    while (temp > 0)
    {
        ret = (ret * 10) + (temp % 10);
        temp = temp / 10;
    }

    return ret;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    a = reverse(a);
    b = reverse(b);
    int c = a + b;

    c = reverse(c);

    printf("%d", c);
}