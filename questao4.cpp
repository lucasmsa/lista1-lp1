#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char palavra[1000];
	int i, j, tamanho;
	cin >> palavra;
	tamanho = strlen(palavra);
	for (i = 0; i < tamanho; i++)
	{
		for (j = 0; j <= i; j++)
		{
			cout << palavra[j];
			if (j == i)
				cout << "\n";
		}
	}
}
