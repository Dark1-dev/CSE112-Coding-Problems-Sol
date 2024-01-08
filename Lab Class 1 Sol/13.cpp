#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num % 2 != 0)
        cout << num*num*num;
    else
        cout << num*num;
    return 0;
}
