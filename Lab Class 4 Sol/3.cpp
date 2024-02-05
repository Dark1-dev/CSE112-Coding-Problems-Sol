#include <iostream>

using namespace std;

float arec(float len, float wid)
{
    return len*wid;
}

int main()
{
    float i,j;
    cin >> i >> j;
    cout << "Area of Rectangle is " << arec(i,j);
    return 0;
}
