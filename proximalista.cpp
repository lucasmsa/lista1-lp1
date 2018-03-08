#include<iostream>
#include <string.h>

using namespace std;

typedef struct
{
	char nome[100];
	char tipomusica[50];
	char nintegrantes[10];
	int ranking;
} tBanda;

static tBanda bandosa[5];

void infobanda(tBanda *bandosa){
	int i = 0;
	for (i = 0; i < 5; i++){
			cout << "\ninsira o nome da banda " << i + 1 << "\n";
			cin >> bandosa[i].nome;
			cout << "\ninsira o estilo musical" << "\n";
			cin >> bandosa[i].tipomusica;
			cout << "\ninsira o numero de integrantes" << "\n";
			cin >> bandosa[i].nintegrantes;
			cout << "\ninsira o ranking da banda" << "\n";
			cin >> bandosa[i].ranking;
	}
}
void consultabanda(tBanda *bandosa)
{
    int ranking, bandaranking;
    cout << "Insira um numero de 1 a 5:" << endl;
    cin >> bandaranking;
    for (int i = 0; i < 5; i++)
    {
        if (bandosa[i].ranking == bandaranking)
        {
            ranking = i;
            break;
        }
    }
    cout << bandosa[ranking].nome << " " << bandosa[ranking].tipomusica << " " << bandosa[ranking].nintegrantes << " " << bandosa[ranking].ranking << endl;
}

void tipoMusicaBanda(tBanda *bandosa)
{
    char tipo[30];
    cout << "Digite um estilo musical" << endl;
    cin >> tipo;
    for (int i = 0; i < 5; i++)
    {
        if (bandosa[i].tipomusica == tipo)
        {
            cout << bandosa[i].nome << endl;
        }
    }
}

void BandaFav(tBanda *bandosa)
{
    char bandinha[30];
    cout << "Digite o nome da banda" << endl;
    cin >> bandinha;
    for (int i = 0; i < 5; i++)
    {
        if (bandosa[i].tipomusica == bandinha)
        {
            cout << "Essa eh uma das suas bandas favoritas: " << bandosa[i].nome << " e esta na " << bandosa[i].ranking << "o posicao da sua lista" << endl;
        }
    }
}

int main()
{
    infobanda(bandosa);
    consultabanda(bandosa);
    tipoMusicaBanda(bandosa);
    BandaFav(bandosa);
}
