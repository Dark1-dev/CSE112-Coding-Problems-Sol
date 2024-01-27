#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,i=1,s=1;
    cin >> n;

    while (i <= n)
    {
        sum+=pow(2,i);
    }

    cout << "Sum of series is " << s;

    return 0;
}
