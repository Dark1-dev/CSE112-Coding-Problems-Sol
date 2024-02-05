#include <iostream>

using namespace std;

class Add {
private:
    int a, b;

public:

    Add(int c, int d)
    {
        a = c;
        b = d;
    }

    void sum() {
        cout << "The sum of two numbers is " << a + b << endl;
    }
};

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    Add obj(a, b);
    obj.sum();

    return 0;
}
