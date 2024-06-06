#include<bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> s;

    int n;

    cin >> n;

    while (n--)
    {
	int k;
	cin >> k;
	s.push(k);
    }

    while (s.size() != 1)
    {
	cout << s.top();
	s.pop();
	cout << " ";
    }

    cout << s.top() << endl;
}
