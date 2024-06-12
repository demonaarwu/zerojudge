#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int k = 1;
    
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
	cout << "2^" << i << " = " << k << endl;
	k *= 2;
    }
}
