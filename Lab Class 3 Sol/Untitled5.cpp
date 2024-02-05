#include <iostream>

namespace std;

int fact(int n) {
    return (n == 0 || n == 1) ? 1 : n * fact(n - 1);
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num >= 0) {
        cout << "Factorial: " << fact(num) << "\n";

    return 0;
}
