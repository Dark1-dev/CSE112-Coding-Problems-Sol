#include <iostream>

using namespace std;

class Rec{
 private:
    int length, width;

 public:
    Rec(int a, int b)
    {
        length = a;
        width = b;
    }

    void getArea()
    {
        cout << "the area of the rectangle is = " << length * width;
    }

};

int main()
{
    int a,b;

    cin >> a >> b;
    Rec r1(a,b);
    r1.getArea();

    return 0;
}
