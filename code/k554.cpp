#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;

	int map[n+2][m+2] = {};

	for (int h = 1; h <= n; h++)
	{
		for (int w = 1; w <= m; w++)
		{
			cin >> map[h][w];
		}
	}


	int risk[n+2][m+2] = {};

	for (int h = 1; h <= n; h++)
	{
		for (int w = 1; w <= m; w++)
		{
			if (map[h][w] == 1)
			{
				risk[h][w] += 1;
				risk[h][w+1] += 1;
				risk[h][w-1] += 1;
				risk[h+1][w] += 1;
				risk[h-1][w] += 1;
			}
			else if (map[h][w] == 2)
			{
				for (int h2 = 0; h2 < n+2; h2++)
				{
					risk[h2][w] += 1;
				}

				for (int w2 = 0; w2 < m+2; w2++)
				{
					risk[h][w2] += 1;
				}

				risk[h][w] -= 1;
			}
		}
	}

	for (int h = 1; h <= n; h++)
	{
		for (int w = 1; w < m; w++)
		{
			cout << risk[h][w];
			cout << ' ';
		}

		cout << risk[h][m];
		cout << "\n";
	}
}
