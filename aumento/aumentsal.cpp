#include <iostream>
#include <stdio.h>

using namespace std; 

int main(int argc, char** argv)
{
	
	double salat = 0.0, salat2 = 0.0, porcentagem = 0.0;
	int percent = 0;
	
	cin >> salat;
	
	if((salat >= 0.00) && (salat <= 400.00)){
		porcentagem = (salat*15.0)/100.00;
		salat2 = porcentagem + salat;
		percent = 15;
	}else if((salat >= 400.01) && (salat <= 800.00)){
		porcentagem = (salat * 12.0)/100.00;
		salat2 = porcentagem + salat;
		percent = 12;
	}if((salat >= 800.01) && (salat <= 1200.00)){
		porcentagem = (salat*10.0)/100.00;
		salat2 = porcentagem + salat;
		percent = 10;
	}else if((salat >= 1200.01) && (salat <= 2000.00)){
		porcentagem = (salat*7.0)/100.00;
		salat2 = porcentagem + salat;
		percent = 7;
	}if(salat >= 2000.01){
		porcentagem = (salat*4.0)/100.00;
		salat2 = porcentagem + salat;
		percent = 4;
	}else{
		
	}

	printf("Novo salario: %.2f \nReajuste ganho: %.2f \nEm percentual: %d ", salat2, porcentagem, percent);
	cout << "%\n";	
	return 0;
}
