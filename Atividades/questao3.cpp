#include <iostream>
#include <locale.h>

using namespace std;

void op(int e, float num1, float num2);
int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int e;
	float num1, num2;
	
	cout << "Informe o primeiro valor: ";
	cin >> num1;
	
	cout << "Informe o segundo valor: ";
	cin >> num2;
	
	cout << "Escolha a operação: ";
	cin >> e;
	
	op(e, num1, num2);
	
	return 0;
}

void op(int e, float num1, float num2){
	
	switch (e){
		case 1:
		   cout << "Média: " << (num1 + num2)/2;
		   break;
		case 2:
			cout << "Diferença: " << num1 - num2;
			break;
		case 3:
			cout << "Multiplicação: " << num1 * num2;
			break;
		case 4:
			printf("%.2f\n", num1 / num2);
			break;
		default:
			cout << "Opção inválida!!!";
			break;
	}
}

