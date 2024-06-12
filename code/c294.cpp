#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k[3];

    for (int i = 0; i < 3; i++)
    {
	cin >> k[i];
    }

    sort(k, k+3);

    int a = k[0], b = k[1], c = k[2];

    cout << a << " " << b << " " << c << endl;

    if ((a+b) < c)
    {
	cout << "No\n";
    }
    else if (a * a + b * b > c * c)
    {
	cout << "Acute\n";
    }
    else if (a * a + b * b == c * c)
    {
	cout << "Right\n";
    }
    else
    {
	cout << "Obtuse\n";
    }
}
