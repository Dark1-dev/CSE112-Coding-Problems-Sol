#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,R=0,rem;
    cin >> n;

    while (n != 0)
    {
        rem = remainder(n,10);
        R = R * 10 + rem;
        n /= 10;
    }

    cout << "R = " << R;

    return 0;
}
