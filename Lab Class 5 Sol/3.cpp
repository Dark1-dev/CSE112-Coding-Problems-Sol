#include <iostream>

using namespace std;

void charchecker(char a)
{
    cout << "The inserted character is ";
    if (a >= 'a' && a  <= 'z') cout << "a small letter\n";
    else if (a >= 'A' && a  <= 'Z') cout << "a capital letter\n";
    else if (a >= '0' && a  <= '9') cout << "a number\n";
    else cout << "a special character\n";

}

int main()
{
    char i;
    cin >> i;

    charchecker(i);
    return 0;
}
