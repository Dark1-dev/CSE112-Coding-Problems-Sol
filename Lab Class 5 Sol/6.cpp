#include <iostream>

using namespace std;

int calc(int a, int b)
{
    return a + b;
}

int calc(int a, int  b, int c)
{
    return a - b - c;
}

float calc(float a, float b, float c, float d)
{
    return a * b * c * d;
}

float calc(float a, float b, float c, float d, float e)
{
    return a / b / c / d / e;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "A is " << a << " and B is " << b << endl;
    cout << "Summation of A and B is " << calc(a,b)<< endl;
    cout << "Subtraction of A and B is " << calc(a,b,0)<< endl;
    cout << "Multiplication of A and B is " << calc(a,b,1,1)<< endl;
    cout << "Division of A and B is " << calc(a,b,1,1,1)<< endl;

    return 0;
}
