#include <iostream>

using namespace std;

int calc(int a, int b)
{
    return a + b;
}

int calc(long a, long b)
{
    return a - b;
}

float calc(float a, long b)
{
    return a * b;
}

float calc(float a, double b)
{
    return a / b;
}

int main()
{
    cout << "A is " << 3 << " and B is " << 5 << endl;
    cout << "Summation of A and B is " << calc(3,5)<< endl;
    cout << "Subtraction of A and B is " << calc(3,5)<< endl;
    cout << "Multiplication of A and B is " << calc(4.0,5)<< endl;
    cout << "Division of A and B is " << calc(3.00,5.00)<< endl;

    return 0;
}
