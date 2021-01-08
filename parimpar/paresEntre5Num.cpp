#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int a = 0;
	int total = 0;
	int ver = 0;
	
	for(int i = 0; i < 5; i++){
		cin >> a;  
		
		ver = a%2;
		
		if(ver == 0){
			total++;
		}else
		{
			
		}   	
	}
	
	cout << total << " valores pares\n";
	
	return 0;
}