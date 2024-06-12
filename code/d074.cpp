#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int max = 0;
    int k;

    while (n--)
    {
	cin >> k; 
	if (k > max)
	{
	    max = k;
	}
    }

    cout << max << endl;
}
