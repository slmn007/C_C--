#include <cstdio>

int main()
{
    int N;
    scanf("%d", &N);

    int arr[N];
    int modus = 0;
    int frekuensiModus = 0;

    // input array
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    // penambahan frekuensi ke hasil tiap indeks
    for (int i = 0; i < N; i++)
    {
        int frek = 1;
        if (arr[i] == 0)
        {
            continue;
        }
        else
        {
            for (int j = i + 1; j < N; j++)
            {
                // printf("%d %d| ", arr[i], arr[j]);
                if (arr[i] == arr[j])
                {
                    arr[j] = 0;
                    frek += 1;
                }
            }
            // printf("%d\n", frek);
            if (frekuensiModus < frek) // cek antara frkuensiLama dengan FrekuensiBaru
            {
                modus = arr[i];
                frekuensiModus = frek;
            }
            else if (frekuensiModus == frek && modus < arr[i]) // cek kalau ada frekuensi yang sama tapi nilai ambil yang besar
            {
                modus = arr[i];
            }
            else
            {
                continue;
            }
        }
    }

    printf("%d\n", modus);
}