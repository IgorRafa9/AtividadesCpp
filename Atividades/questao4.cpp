#include <iostream>
#include <locale.h>

using namespace std;

void somaNaturais(int num);

int main(){

	setlocale(LC_ALL, "Portuguese");

	int n = 100;
	
	somaNaturais(n);
	
	return 0;
}

void somaNaturais (int num){
	int soma;
	
	soma = ((1 + num) * num) / 2;
	
	cout << "Soma: " << soma;
}
