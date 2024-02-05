#include <iostream>

using namespace std;

class Circle{
private:
    float radius, pi = 3.1416;

public:
    float compute_area(float a)
    {
        radius = a;
        return pi*(radius*radius);
    }
};

int main()
{
    Circle c1;
    float r;

    cin >> r;
    cout << "The area of circle is " << c1.compute_area(r);

    return 0;
}
