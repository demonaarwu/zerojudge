#include<bits/stdc++.h>

using namespace std;

int main()
{
    int count;
    int days;
    int sum = 0;

    cin >> days;

    for (int i = 1; i <= days; i++)
    {
	cin >> count;
	sum += (i * count);
    }

    cout << sum << endl;
}
