#include <iostream>

using namespace std;

int main()
{
    int n,j=1,c=0;
    cin >> n;

    while (n >= 1)
    {
        n/=10;
        c++;
    }
    cout << "Digits in number " << n << " is: " << c;

    return 0;
}
