#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
	for (int k = 0; k < (2 * n - 2 * i) / 2; k++)
	{
	    cout << '_';
	}

	for (int j = 0; j < (2*i-1); j++)
	{
	    cout << '*';
	}
	for (int k = 0; k < (2 * n - 2*i) / 2; k++)
	{
	    cout << '_';
	}

	cout << endl;

    }
}
