#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int att[n];
    int def[n];

    for (int i = 0; i < n; i++)
    {
	cin >> att[i] >> def[i];
    }

    int max_ = 0;
    int second = 1;

    if ((att[0] * att[0] + def[0] * def[0]) < (att[1] * att[1] + def[1] * def[1]))
    {
	max_ = 1;
	second = 0;
    }

    for (int k = 2; k < n; k++)
    {
	if((att[k]*att[k] + def[k]*def[k]) > (att[max_]*att[max_] + def[max_]*def[max_]))
	{
	    max_ = k;
	    second = max_;
	}
	else if ((att[k]*att[k] + def[k]*def[k]) > (att[second]*att[second] + def[second]*def[second]))
	{
	    second = k;
	}
    }

    cout << att[second] << " " << def[second] << endl;
}
