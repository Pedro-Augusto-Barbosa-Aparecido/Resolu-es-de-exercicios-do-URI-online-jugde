#include <iostream>

using namespace std;

int main(){
	
	int vetor[6] = {1, 2, 3, 4, 5, 6};
	int i;
	for (i = 0; i < sizeof(vetor) / 4; i++){
		cout << vetor[i] << "\n\n";
	}
	
	return 0;
}
