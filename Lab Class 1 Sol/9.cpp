//C++ Program to Check Vowel or Consonant
#include<iostream>
using namespace std;

int main()
{
    char a;
    cin>>a;
    a = toupper(a);
    if (a == 'A' || a == 'I'|| a == '0'|| a = 'U')
        cout<<"Vowel";
    else
        cout<<"Consonant";

    return 0;
}
