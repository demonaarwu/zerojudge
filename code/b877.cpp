#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int m = (b >= a) ? (b-a) : (100-a+b);
    cout << m << "\n";
}
