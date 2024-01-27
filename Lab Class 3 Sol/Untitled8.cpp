#include <iostream>

using namespace std;

int main()
{
    int n,j=0,sum=0;
    cin >> n;

    while (n > 0)
    {
        j = n % 10;
        n /= 10;
        sum += j;
    }
    cout << "Sum of digits in input: " << sum;

    return 0;
}
