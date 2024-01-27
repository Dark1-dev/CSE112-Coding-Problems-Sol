#include <iostream>

using namespace std;

int main()
{
    int n,j=1,s=0;
    cin >> n;

    while (j <= n)
    {
        s+=j;
        j++;
    }

    cout << "Sum of 1 to " << n << " is: " << s;

    return 0;
}

