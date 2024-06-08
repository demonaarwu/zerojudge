#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    cin >> N;

    while (N--)
    {
	int h1, m1;
	int h2, m2;
	int m3;

	cin >> h1 >> m1 >> h2 >> m2 >> m3;

	if ((h1 * 60 + m1 + m3) <= (h2 * 60 + m2))
	{
	    cout << "Yes\n";
	}
	else
	{
	    cout << "No\n";
	}
    }
}
