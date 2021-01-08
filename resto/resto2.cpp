#include <iostream>

using namespace std; 

int main(int argc, char** argv)
{
    int n = 0, i = 0, aux = 0;
	   
	cin >> n;
	
	if((n > 1) && (n < 10000)){
		for(i = 0; i <= 10000; i++){
			aux = i%n;
			
			if(aux == 2){
				cout << i << "\n";
			}else{
				
			}
		}
	}else{
		
	}	
	return 0;
}