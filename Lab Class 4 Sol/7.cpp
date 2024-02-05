#include <iostream>

using namespace std;

int digisum(int n)
{
    int a=0,j=0,sum=0;
    while (n > 0)
    {
        a = n % 10;
        n /= 10;
        sum += a;
    }

    return sum;
}

int main()
{
    int i;
    cin >> i;
    cout << "Digits added up: " << digisum(i);

    return 0;
}
