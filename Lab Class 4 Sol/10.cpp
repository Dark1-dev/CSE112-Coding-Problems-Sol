#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int ia = 0;
    char i[2048];
    fgets(i,2048,stdin);

    for (int j = 1; i[j] != '\0'; j++)
        ia++;

    cout << ia;
    return 0;
}
