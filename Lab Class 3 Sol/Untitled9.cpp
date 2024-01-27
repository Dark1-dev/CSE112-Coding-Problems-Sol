#include <iostream>

using namespace std;

int main()
{
    int c=0,n;
    float sum=0.00;
    cout << "Enter amount of inputs to take: ";
    cin >> n;

    int i[n];

    for (int l = 0; l < n; l++)
        cin >> i[l];

    while (c < n)
    {
        sum += i[c];
        c++;
    }

    sum /= n;

    cout << "the average of " << n << " numbers is: " << sum;

    return 0;
}
