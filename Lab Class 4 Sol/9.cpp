#include <iostream>
#include <cmath>

using namespace std;

int reverse(int n)
{
    int R=0,rem;

    while (n != 0)
    {
        rem = remainder(n,10);
        R = R * 10 + rem;
        n /= 10;
    }

    return R;
}

int main()
{
    int i;
    cin >> i;
    cout << "Reversed number is: " << reverse(i);

    return 0;
}
