#include <cstdio>
#include <string>

using namespace std;

int main()
{
    char kata[100];

    // printf("Inputkan katamu (max 100 kata): \n");
    scanf("%[^\n]%*c", kata);

    string inpKata = kata;
    printf("%s", inpKata.c_str());
}