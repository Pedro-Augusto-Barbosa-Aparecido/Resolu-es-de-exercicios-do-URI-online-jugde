#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
	
	char palavra[500], letra_digitada[1], mostra_de_acordo[500];
	int chance, acerto, tamanho_palavra, i;
	bool correto_nocorrect;

	correto_nocorrect = false;
	chance = 6;
	acerto = 0;
	tamanho_palavra = 0;
	
	cout << "Insira a palavra: ";
	cin >> palavra;
	system("cls");
	
	for (i = 0; i < sizeof(palavra) / 4; i++){
		mostra_de_acordo[i] = '_';
	}
	
	while(palavra[i] != '\0'){
		i++;
		tamanho_palavra++;
	}
	
	while((chance > 0) and (acerto <= tamanho_palavra)){
		cout << "total de chances: " << chance << "\n\n";
		for(i = 0; i <= tamanho_palavra; i++){	
		cout << mostra_de_acordo[i];
	}
	    cout << "\n\ndigite uma letra: ";
		cin >> letra_digitada[0];
		
		for (i = 0; i < tamanho_palavra; i++){
			if (palavra[i] == letra_digitada[0]){
				mostra_de_acordo[i] = letra_digitada[0];
				acerto++;
				correto_nocorrect = true;
			}else{
			}
			}
		if (correto_nocorrect == false){
			chance--;
		}	
		system("cls");
		correto_nocorrect = false;	
	}
	    if (acerto == tamanho_palavra){
		cout << "You win!!" << "\n";
		for(i = 0; i < 1000; i++){
		}	
		cout << "You win!!" << "\n";
		for(i = 0; i < 1000; i++){
		}	
		cout << "You win!!" << "\n";
		for(i = 0; i < 1000; i++){
		}	
		}
		else if(acerto != tamanho_palavra) {
		cout << "You lose!!" << "\n";
		for(i = 0; i < 1000; i++){
		}	
		cout << "You lose!!" << "\n";
		for(i = 0; i < 1000; i++){
		}	
		cout << "You lose!!" << "\n";
		for(i = 0; i < 1000; i++){
		}	
		}
		system("pause");
	    return 0;
	}
	
	

