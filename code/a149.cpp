#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
	int num;
	int p = 1;
	cin >> num;

	if (num == 0)
	{
	    cout << 0 << "\n";
	}
	else
	{
		while (num > 0)
		{
		    p *= (num % 10);
		    num -= (num % 10);
		    num /= 10;
		}	    	    
		cout << p << "\n";
	}
	}
    }
