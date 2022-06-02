#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int e;
	
	cout << "Informe o código desejado: \n";
	cin >> e;
	
	switch (e){
		case 1: 
			cout << "Alimento não perecível\n";
			break;
		case 2 ... 4:
			cout << "Alimento perecível\n";
			break;
		case 5:
		case 6:
			cout << "Vestuário\n";
			break;
		case 7:
			cout << "Higiene Pessoal\n";
			break;
		case 8 ... 15:
			cout << "Limpeza e Utensílios Domésticos\n";
			break;
		default:
			cout << "Código Inválido\n";
			break;
	}
	
	return 0;
}
