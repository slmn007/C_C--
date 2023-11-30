#include <cstdio>

int main()
{
    int A, B;
    int jml;
    int minValue = 1;
    int maxValue = 100;

    printf("Masukkan nilai antara %d dan %d :\n", minValue, maxValue);
    scanf("%d %d", &A, &B);
    if ((A >= minValue && A <= maxValue) && (B >= minValue && B <= maxValue))
    {
        jml = A + B;
        printf("%d\n", jml);
    }
    else
    {
        printf("Nilai yang dimasukkan tidak berada dalam rentang yang diizinkan.");
    }
}