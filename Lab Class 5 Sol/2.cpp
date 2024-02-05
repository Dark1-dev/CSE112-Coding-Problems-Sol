#include <bits/stdc++.h>

using namespace std;

int primechk(int n)
{
    if (n <= 1)
        return 0;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;

    return 1;
}

int main()
{
	int a,b;
	cout << "Insert Upper limit: ";
	cin >> a;
	cout << "Insert Lower limit: ";
	cin >> b;

	for (int i = a; i <= b; i++)
		if (primechk(i)) cout << i << " ";

	return 0;
}
