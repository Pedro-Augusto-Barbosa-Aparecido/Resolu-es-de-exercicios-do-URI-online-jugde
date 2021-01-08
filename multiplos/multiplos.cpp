#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

	int a = 0, b = 0, aux = 0;
	
	cin >> a >> b;
	
	if(a > b){
		aux = a%b;
		
		if(aux == 0){
			cout << "Sao Multiplos\n";
		}else{
			cout << "Nao sao Multiplos\n";
		}
		
	}else{
		aux = b%a;
		
		if(aux == 0){
			cout << "Sao Multiplos\n";
		}else{
			cout << "Nao sao Multiplos\n";
		}
		
	}
	return 0;
}