#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;


    if (isalpha(ch)) {
        if (islower(ch)) {
            cout << "The entered character is a small letter.";
        } else {
            cout << "The entered character is a capital letter.";
        }
    } else if (isdigit(ch)) {
        cout << "The entered character is a digit.";
    } else {
        cout << "The entered character is a special symbol.";
    }

    return 0;
}
