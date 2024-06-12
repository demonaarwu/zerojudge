#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b);

int main()
{
   int a,b;
   cin >> a >> b;
   cout << gcd(a, b) << endl;
}

int gcd(int a, int b)
{
    if (a == b)
    {
	return a;
    }
    else if (a > b)
    {
	return gcd(a-b, b);
    }
    else
    {
	return gcd(a, b-a);
    }
}
