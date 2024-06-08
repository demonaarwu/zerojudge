#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    cin >> N;

    long long sum = 0;

    if (N % 2 == 0)
    {
	sum = N * N / 4;
    }
    else
    {
	sum = (N + 1) * (N + 1) / 4;
    }

    cout << sum << endl;
}
