#include <iostream>

using namespace std;

int main(){
	cout << "Digite o seu salario: ";
	float salario;
	float desconto;
	cin >> salario;
	if (salario <= 420){
		desconto = salario*0.08;
		salario = salario*0.92;
	}
	else if (salario > 420 && salario <= 1350){
		desconto = salario*0.09;
		salario = salario*0.91;
	}
	else{
		desconto = salario*0.1;
		salario = salario*0.9;
	}
	cout << "Seu salario eh " << salario << " e o desconto eh " << desconto << "\n";
}

