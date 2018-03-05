#include <iostream>

using namespace std;

int fib(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
		return fib(n - 1) + fib(n - 2);
		
}

int main()
{
	cout << "Digite um numero: ";
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		cout << fib(i) << " ";
	}
	cout << "\n";
}

