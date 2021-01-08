#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int nota = 0;
	
	cin >> nota;
	
	if((nota >= 0) && (nota <= 100)){
		if(nota == 0){
			cout << "E\n";
		}else{
			
		}if((nota >= 1) && (nota <= 35)){
			cout << "D\n";
		}else{
			
		}if((nota >= 36) && (nota <= 60)){
			cout << "C\n";
		}else{
			
		}if((nota >= 61) && (nota <= 85)){
			cout << "B\n";
		}else{
			
		}if((nota >= 86) && (nota <= 100)){
			cout << "A\n";
		}else{
			
		}
	}else{
		
	}
	
	return 0;
}