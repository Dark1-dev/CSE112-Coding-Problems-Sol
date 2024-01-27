#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,j=1,s=0;
    cin >> n;

    while (j <= n)
    {
        s+=pow(j,2);
        j++;
    }

    cout << "Sum of calculated series is: " << s;

    return 0;
}
