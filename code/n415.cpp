#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int arr[n];
    int cost = 0;

    for (int i = 0; i < n; i++)
    {
	cin >> arr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
	for (int k = 0; k < n-i; k++)
	    {
		int tmp = arr[k];
		arr[k] = arr[k+1];
		arr[k+1] = tmp;
		cost += (arr[k] + arr[k+1]);
	    }
    }

    cout << cost << endl;

    for (int k = 0; k < n; k++)
    {
	cout << arr[k] << endl;
    }
}
