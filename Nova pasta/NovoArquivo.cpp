#include <iostream>

using namespace std;

void fator(int num);
void fibonnaci(int lim);

int main(int argc, char** argv)
{	
fator(10);
fibonnaci(12);	
return 0;

}

void fibonnaci(int lim){
	int seq[1000];
	seq[0] = 0;
	seq[1] = 1;
	int aux = 0;
	for(int i = 1; i < lim; i++){
		aux = i - 1;
		seq[i + 1] = seq[aux] + seq[i];
	}
	for(int i = 0; i < lim; i++){
		cout << seq[i] << "\n"; 
	}
}

void fator(int num){
int res[1000];
int aux1;
int res1 = num;
int aux = num / num;
for(int i = 0; i < (num - 1); i++){	
	res[i] = aux++;
 }
for(int i = 0; i < (num - 1); i++){	
	aux1 = res[i];
	res1 = res1 * aux1;
 }
for(int i = 0; i < (num - 1); i++){
	cout << res[i] << "\n";
 }	
 cout << res1 << "\n------------------------------------------------\n"; 
}
