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
	
	cout << "Escolha a opera��o: ";
	cin >> e;
	
	op(e, num1, num2);
	
	return 0;
}

void op(int e, float num1, float num2){
	
	switch (e){
		case 1:
		   cout << "M�dia: " << (num1 + num2)/2;
		   break;
		case 2:
			cout << "Diferen�a: " << num1 - num2;
			break;
		case 3:
			cout << "Multiplica��o: " << num1 * num2;
			break;
		case 4:
			printf("%.2f\n", num1 / num2);
			break;
		default:
			cout << "Op��o inv�lida!!!";
			break;
	}
}

