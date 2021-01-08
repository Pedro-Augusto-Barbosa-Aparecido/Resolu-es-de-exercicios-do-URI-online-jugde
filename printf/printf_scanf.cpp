#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv)
{
	int nuns[10];
	int num = 0, aux = 0;
	
	for(int i = 0; i < 10; i++){	
	
	printf("Digite um numero: ");	
	scanf("%d", &num);
	
	nuns[i] = num;
	
	}
for(int a = 0; a < 10; a++){	
    
    aux = nuns[a];
	printf("\nOs numeros que voce digitou foi: %d ", aux);
	
  }
	
	return 0;
}