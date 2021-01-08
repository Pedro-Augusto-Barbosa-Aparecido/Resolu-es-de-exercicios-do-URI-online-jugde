#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	vector <int> teste;
	vector <int> teste1;
	int tam = 0, i = 0, a = 0, b = 0;
	
	cin >> tam;
	
	for(i = 0; i < tam; i++){
		
		cin >> a >> b;
		
		teste.push_back(a);
		teste1.push_back(b);
		
	}
	
	teste.insert(teste.begin() + 1, 888);
	
	teste.swap(teste1);
	
	cout << "\n\nTamnho do Vector 1: " << teste.size() << "\nTamanho do Vector 2: " << teste1.size() << "\n\nValores guardados no Vector 1: ";
	
	teste1.erase(teste1.begin() + 1);
	
	for(i = 0; i < (tam - 1); i++){
	
		cout << teste[i] << ", ";
			
	}
	
	cout << teste[(tam - 1)] << ".\nValores guardados no Vector 2: ";
	
	for(i = 0; i < (tam - 1); i++){
	
		cout << teste1[i] << ", ";
			
	}
	
	cout << teste1[(tam - 1)] << ".\n";
	
	cout << "\nValor do inicio. : " << teste.front() << "\n"; 
	cout << "Valor do meio.....: " << teste.at(tam/2) << "\n"; 
	cout << "Valor do final....: " << teste.back() << "\n"; 
	
	for(i = 0; i < tam; i++){
		teste.pop_back();
	}
	
	teste1.clear();
	
	cout << "\nNovos tamanhos dos vectors 1 e 2: " << teste.size() << " e " << teste1.size() << "\n";
	
	return 0;
}