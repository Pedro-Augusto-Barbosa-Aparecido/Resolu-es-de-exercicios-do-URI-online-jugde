#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

	int a = 0, b = 1;
	
	while(a != b){
		
		cin >> a >> b;
		
		if(a > b){
			cout << "Crescente\n";
		}else if(a < b){
			cout << "Decrescente\n";
		}else{
			
		}
		
	}
	
	return 0;
}