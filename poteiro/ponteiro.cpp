#include <iostream>

using namespace std;

void mostra(int *n);

int main(int argc, char** argv)
{
	int vetor[4] = {0, 1, 2, 3};
	
	mostra(vetor);
	
	return 0;
}

void mostra(int *n){
	
	for (int i = 0; i < 4; i++){
		cout << n[i] << "\n";
		}
	
}