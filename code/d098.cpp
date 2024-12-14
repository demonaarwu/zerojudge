#include <bits/stdc++.h>

using namespace std;

#define int long long

bool is_number(string s)
{
    int len = s.length();

    for (int i = 0; i < len; i++)
    {
	if (!isdigit(s[i]))
	{
	    return false;
	}
    }

    return true;
}

signed main()
{
    string s;

    while (getline(cin, s))
    {
	string token;
	stringstream ss(s);
	int count = 0;

	ss << s;

	while (ss >> token)
	{
	    if (is_number(token.c_str()))
	    {
		count += atoi(token.c_str());
	    }
	}
	cout << count << endl;
    }
}
