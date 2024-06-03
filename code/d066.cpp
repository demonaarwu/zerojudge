#include<bits/stdc++.h>

using namespace std;

int main()
{
    int h, m;
    cin >> h >> m;

    if (h < 17 && h > 7)
    {
	cout << "At School\n";
    }
    else if (h == 7 && m >= 30)
    {
	cout << "At School\n";
    }
    else
    {
	cout << "Off School\n";
    }
}
