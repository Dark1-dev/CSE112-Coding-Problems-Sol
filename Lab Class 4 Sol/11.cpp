#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[1024], str2[2048];

    cout << "1st string: ";
    fgets(str1,1024,stdin);

    cout << "2nd string: ";
    fgets(str2,2048,stdin);

    strcat(str2,str1);

    cout << "Added strings are: " << str2;

    return 0;
}
