#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char sexo[10], sexomaior, sexomenor;
	float altura[10], maior = 0, menor = 100000;
	int i, j = 0, k = 0, fem = 0, mas = 0, mul[10], hom[10], medhom = 0, medmul = 0;

	for(i = 0; i < 10; i++){
		cout << "\ndigite o sexo ";
		cin >> sexo[i];
		cout << "digite a altura do individuo "<< i+1 << "\n"; 
		cin >> altura[i];
		if (sexo[i] == 'M')
		{
			hom[j] = altura[i];
			mas++;
			j++;
		}
		if (sexo[i] == 'F')
		{
			mul[j] = altura[i];
			fem++;
			k++;
		}
		if(altura[i] > maior)
		{
			maior = altura[i];
			sexomaior = sexo[i];
		}
		if(altura[i] < menor)
		{
			menor = altura[i];
			sexomenor = sexo[i];
		}
	}

	for (i = 0; i < j; i++)
	{
		medhom += hom[i];
	}

	medhom = medhom/j;

	for (i = 0; i < k; i++)
	{
		medmul += mul[i];
	}
	medmul = medmul/k;
	
	cout << "A media da altura entre homens eh " << medhom << " e entre mulheres eh " << medmul << ", havendo " << j << " homens e " << k << " mulheres\n";	

}





