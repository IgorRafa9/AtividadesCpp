#include <iostream>
#include <locale.h>

using namespace std;

void fatorial(int n);

int main(){

	setlocale(LC_ALL, "Portuguese");

	int n;
	
	cout << "Escreva um valor: \n";
	cin >> n;
	
	fatorial(n);

	return 0;
}

void fatorial(int n){
	int fat = 1;
	for(int i = n; i > 1; i--){
		fat *= i;
	}
	cout << "Resultado: " << fat;
}
