#include<bits/stdc++.h>

using namespace std;

vector<int> primes;

map<int, int> d;
void calculate_primes(long long n);

int main()
{
    long long n;
    cin >> n;

    calculate_primes(n);

    for (int i = 0, si = primes.size(); i < si-1; i++)
    {
	if (d[primes[i]] == 1)
	{
	    cout << primes[i];
	    cout << " * ";
	}
	else if (d[primes[i]]  > 1)
	{
	    cout << primes[i] << "^" << d[primes[i]];
	    cout << " * ";
	}

    }

    if (d[primes.back()] == 1)
    {
	cout << primes.back();
    }
    else
    {
	cout << primes.back() << "^" << d[primes.back()];
    }
    cout << endl;
    
}

void calculate_primes(long long n)
{
    primes.push_back(2);

    if (n % 2 == 0)
    {
	d[2] = 1;

	long long k = n/2;

	while (k % 2 == 0)
	{
	    d[2] += 1;
	    k/=2;
	}
    }
    for (int i = 3; i <= n; i += 2)
    {
	bool is_prime = true;

	for (int k = 0, size = primes.size(); k < size && is_prime; k++)
	{
	    if (i % primes[k] == 0)
	    {
		is_prime = false;
	    }
	}

	if (is_prime && (n % i == 0))
	{
	    primes.push_back(i);

	    d[i] = 1;
	    long long k = n/i;

	    while (k % i == 0)
	    {
		d[i] += 1;
		k /= i;
	    }
	    }
	}
}
