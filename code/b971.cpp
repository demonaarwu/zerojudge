#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a1, an, d;

    cin >> a1 >> an >> d;

    if (d > 0)
    {
	for (int i = a1; i < an; i+=d)
	{
	    cout << i << " ";
	}
	cout << an << endl;
    }
    else
    {
	for (int i = a1; i > an; i += d)
	{
	    cout << i << " ";
	}
	cout << an << endl;
    }
}
