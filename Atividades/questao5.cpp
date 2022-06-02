#include <iostream>
#include <locale.h>

using namespace std;

void divisores(int n);

int main(){

	setlocale(LC_ALL, "Portuguese");

	int n;
	
	cout << "Escreva um valor: \n";
	cin >> n;

	divisores(n);
	
	return 0;
}

void divisores(int n){
	for(int i = 1; i <= n; i++){
		if(n%i==0){
			cout << i << " é divisor de " << n << "\n";
		}
	}
}
