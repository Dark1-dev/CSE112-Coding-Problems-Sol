#include <iostream>
#include <cmath>

using namespace std;

void findRoots(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        // Two distinct real roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    }

    else if (discriminant == 0)
    {
        // One real root (repeated)
        double root = -b / (2 * a);
        cout << "Root: " << root << endl;
    }

    else
    {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

int main() {
    double a, b, c;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    if (a == 0) {
        cout << "Invalid input. 'a' should not be zero." << endl;
    } else {
        findRoots(a, b, c);
    }

    return 0;
}
