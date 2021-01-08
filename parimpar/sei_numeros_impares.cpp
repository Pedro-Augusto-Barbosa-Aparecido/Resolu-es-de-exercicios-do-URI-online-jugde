#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv)
{
	
	int a = 0, b = 0;
	
	cin >> a;
	
	if(a > 0){
		for (int i = 0; i < 12; i++){
				   
		   	a++;
		   	b = a%2;
		
			   	if(b != 0){
			   	cout << a << "\n";
			}else{
			
			}
		}
	}
	
	return 0;
}