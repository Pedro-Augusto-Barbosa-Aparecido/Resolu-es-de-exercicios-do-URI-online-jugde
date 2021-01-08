#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	
	int a = 0, s = 0, d = 0, f = 0, g = 0;
	int aux = 0, valpar = 0, valimp = 0, valpos = 0, valneg = 0;
	
	cin >> a >> s >> d >> f >> g;
	
	int numEnt[5] = {a, s, d, f, g};
	
	int tamArray = (sizeof(numEnt) / 4);
	
	for(int i = 0; i < tamArray; i++){
		
		aux = numEnt[i]%2;
		
		if(aux == 0){
			valpar++;
		}else{
			valimp++;
		}if(numEnt[i] > 0){
			valpos++;
		}else if(numEnt[i] < 0){
			valneg++;
		}else{
			
		}
		
	}
	
	cout << valpar << " valor(es) par(es)\n";
	cout << valimp << " valor(es) impar(es)\n";
	cout << valpos << " valor(es) positivo(s)\n";
	cout << valneg << " valor(es) negativo(s)\n";
	
	return 0;
}