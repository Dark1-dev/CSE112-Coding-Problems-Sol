#include <iostream>
#include <cmath>

using namespace std;

int primechk(int n)
{
    if (n <= 1)
        return 0;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;

    return 1;
}

int main()
{
    int a;

    cout << "Enter a number: ";
    cin >> a;

    if (primechk(a)) cout << "The number is a prime number";
    else cout << "The number is not a prime number";

    cout << endl;
    return 0;
}
