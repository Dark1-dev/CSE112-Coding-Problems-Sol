#include <iostream>

using namespace std;

const float pi = 3.1416;

float rad(float r)
{
    return pi*(r*r);
}

int main()
{
    float i;
    cin >> i;
    cout << "Area of circle is " << rad(i);
    return 0;
}
