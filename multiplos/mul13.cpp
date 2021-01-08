#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int a = 0, b = 0, sona = 0, aux = 0;
	
	cin >> a >> b;
	
	if(a < b){
		for(int i = a; i <= b; i++){
			
			aux = i%13;
			
			if(aux != 0){
				sona +=i;
			}else{
				
			}
			
		}
	}else if(a > b){
		for(int p = b; p <= a; p++){
			aux = p%13;
			if(aux != 0){
				sona +=p;
			}else{
				
			}
		}
	}else{
		
	}
	
	cout << sona << "\n";
	
	return 0;
}