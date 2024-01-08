//C++ Program to Check whether a Number is Even or Odd
#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    if (a == 0 || a == 1)
        cout<<"Not Valid";
    else if(a%2==0)
        cout<<"Even";
    else
        cout<<"Odd";

    return 0;
}
