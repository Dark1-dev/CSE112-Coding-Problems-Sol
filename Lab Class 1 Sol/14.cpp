#include <iostream>
using namespace std;

int main()
{
    int a,b,c,calc;
    cin >> a >> b >> c;
    calc = (a + b + c) / 3;
    cout << "Your calculated division is: ";

    if (calc >= 60)
        cout << "First";
    else if (calc >= 50 && calc <= 59)
        cout << "Second";
    else if (calc >= 40 && calc <= 49)
        cout << "Third";
    else
        cout << "Fail";

    return 0;
}
