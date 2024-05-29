#include<bits/stdc++.h>

using namespace std;

int main()
{
    char word[7];
    cin >> word;

    for (int i = 0; i < 6; i++)
    {
	cout << abs(word[i]-word[i+1]);
    }
    cout << endl;

}
