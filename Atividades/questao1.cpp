#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int e;
	
	cout << "Informe o c�digo desejado: \n";
	cin >> e;
	
	switch (e){
		case 1: 
			cout << "Alimento n�o perec�vel\n";
			break;
		case 2 ... 4:
			cout << "Alimento perec�vel\n";
			break;
		case 5:
		case 6:
			cout << "Vestu�rio\n";
			break;
		case 7:
			cout << "Higiene Pessoal\n";
			break;
		case 8 ... 15:
			cout << "Limpeza e Utens�lios Dom�sticos\n";
			break;
		default:
			cout << "C�digo Inv�lido\n";
			break;
	}
	
	return 0;
}
