#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define int long long

vector<int> split_string(string s)
{
    s += ' ';

    vector<int> nums;
    int head = 0;
    int end = 0;
    int length = s.length();

    for (int i = 0; i < length; i++)
    {
	if (s[i] == ' ')
	{
	    nums.push_back(stoi(s.substr(head, end)));
	    head = i+1;
	    end = i+1;
	}
	else
	{
	    end++;
	}
    }
    return nums;
}

signed main()
{
    ios::sync_with_stdio(false); cin.tie(0);

    int T;
    cin >> T;
    string tmp;

    while (T--)
    {
	cin.ignore();
	getline(cin, tmp);

	int count = 0;

	string indexes;
	getline(cin, indexes);

	vector<int> index = split_string(indexes);

	int n = index.size();

	map<int, string> record;
	string x;

	for (int i = 0; i < n; i++)
	{
	    cin >> x;
	    record[index[i]] = x;
	}

	for (int i = 1; i <= n; i++)
	{
	    cout << record[i] << endl;
	}
    }
}
