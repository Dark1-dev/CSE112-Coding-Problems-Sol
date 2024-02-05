#include <iostream>

using namespace std;

int med(int a,int b,int c)
{
    int med;
    if ((a > b && a < c) || (a > c && a < b)) med = a;
    if ((b > a && b < c) || (b > c && b < a)) med = b;
    if ((c > b && c < a) || (c > a && c < b)) med = c;
    return med;
}

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    cout << "Medium = " << med(a,b,c);
    return 0;
}
