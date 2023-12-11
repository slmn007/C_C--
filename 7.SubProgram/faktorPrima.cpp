#include <cstdio>

int cekPangkat(int num, int arr[40], int idx)
{
    int count = 0;
    for (int i = idx; i < 40; i++)
    {
        if (num == arr[i])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    printf("^%d", count);
    return idx + count - 1;
}

int main()
{
    int num;
    scanf("%d", &num);
    int sisa = num;

    int arr[40] = {1};

    //  mencari faktorisasi
    for (int i = 0; i < 40; i++)
    {
        for (int j = 2; j <= sisa; j++)
        {
            // printf("%d i ", i);
            if (sisa % j == 0)
            {
                // printf("%d j\n", j);
                arr[i] = j;
                sisa = sisa / j;
                break;
            }
        }
        // printf("%d|", arr[i]);
    }
    // printf("\n");
    // printf("%d\n", sisa);

    // show output
    bool batas = true;
    int index = 0;
    while (batas == true)
    {
        /* code */
        int temp = arr[index];

        if (index == 0)
        {
            printf("%d", temp);
            if (temp == arr[index + 1])
            {
                index = cekPangkat(temp, arr, index);
            }
        }
        else if (temp == 0)
        {
            batas = false;
        }
        else
        {
            printf(" x %d", temp);
            if (temp == arr[index + 1])
            {
                index = cekPangkat(temp, arr, index);
            }
        }
        index++;
    }
}