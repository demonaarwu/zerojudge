#include<bits/stdc++.h>

using namespace std;

int main()
{
    int first, second;
    char oper;
    cin >> first >> oper >> second;

    switch (oper)
    {
	case '+':
	    cout << first + second << endl;
	    break;
	case '-':
	    cout << first - second << endl;
	    break;
	case '*':
	    cout << first * second << endl;
	    break;
	case '/':
	    cout << first / second << endl;
	    break;
    }
}
