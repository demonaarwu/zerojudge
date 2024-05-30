#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    bool weird = false;

    while ((cin >> s) && !(s[0] == '0' && s.length() == 1))
    {
	int sum = 0;

	for (int i = 0; i < s.length() && !weird; i++)
	{
	    if ((tolower(s[i]) >= 'a') && (tolower(s[i]) <= 'z'))
	    {
		sum += tolower(s[i]) - 'a' + 1;
	    }
	    else
	    {
		weird = true;
	    }
	}
	if (!weird)
	{
	    cout << sum << "\n";
	}
	else{
	    cout << "Fail\n";
	}
	weird = false;
    }
}
