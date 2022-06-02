#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	float nota[2], somaNota, media;
	int i;
	
	for(i = 0; i < 2; i++){
		cout << "Digite a nota: \n";
		cin >> nota[i];
		somaNota += nota[i];
		media = somaNota / 2;
	}
	
	cout << "Situação do Aluno: ";
	if(media <= 4){
		cout << "Reprovado\n";
	}else if(media >= 4.1 && media <= 7){
		cout << "Exame\n";
	}else{
		cout << "Aprovado\n";
	}
	
	return 0;
}

