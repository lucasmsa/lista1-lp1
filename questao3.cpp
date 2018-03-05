#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char palavra1[1000], palavra2[1000], palavro[1000];
	int i, j;
	cout << "Digite um palavra: ";
	cin >> palavra1;
	j = strlen(palavra1) -1;
	for (i = 0; i <= (strlen(palavra1) - 1); i++)
	{
		palavra2[i] = palavra1[j];
		j--;
	}
	for (i = 0; i <= (strlen(palavra1) - 1); i++)
	{
		if (palavra1[i] != palavra2[i])
		{
			cout << "Nao eh palindromo!\n";
			return 0;
		}
	}
	cout << "Eh palindromo!\n"; 
}

