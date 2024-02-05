#include <iostream>

using namespace std;

int maxi(int a, int b, int c)
{
    int max;
    if (a > b && a > c) max = a;
    else if (b > a && b > c) max = b;
    else if (c > a && c > b) max = c;
    return max;
}

int mini(int a, int b, int c)
{
    int min;
    if (a < b && a < c) min = a;
    else if (b < a && b < c) min = b;
    else if (c < a && c < b) min = c;
    return min;
}

int main()
{
    int x,y,z;
    cout << "Enter 3 numbers: ";
    cin >> x >> y >> z;
    cout << "Max :" << maxi(x,y,z) <<"\n";
    cout << "Min :" << mini(x,y,z) <<"\n";

    return 0;
}
