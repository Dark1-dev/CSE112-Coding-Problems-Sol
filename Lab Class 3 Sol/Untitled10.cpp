#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    int n,i=0,j=0,max=0,minn=INT_MAX;

    cout << "Enter value of n: ";
    cin >> n;
    int a[n];

    while (i++ < n)
        cin >> a[i];

    while (j++ < n)
    {
        if (a[j] > max) max = a[j];
        if (a[j] < minn) minn = a[j];
    }

    cout << "Max: " << max << "\n" << "Min: " << minn;

    return 0;
}
