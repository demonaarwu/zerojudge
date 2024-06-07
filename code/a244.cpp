#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    long long a, b, c;

    cin >> N;

    while (N--)
    {
	cin >> a >> b >> c;

	switch (a)
	{
	    case 1:
		cout << b+c << endl;
		break;
	    case 2:
		cout << b-c << endl;
		break;
	    case 3:
		cout << b*c << endl;
		break;
	    case 4:
		cout << b/c << endl;
		break;
	}
    }
}
