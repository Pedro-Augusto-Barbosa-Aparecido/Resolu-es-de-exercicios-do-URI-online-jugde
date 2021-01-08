#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	
	int a = 0, b = 0;
	int aux = 0;
	
	cin >> a >> b;
	
if(a < b){
	
	aux = a + 1;
	int q = 0, res = 0, re = 0;
	
	res = a + 1;
		
    for(int i = aux; i < b; i++){
	    re = res%2;
		 
		if(re != 0){
			q = q + (res);
			
		}else{
			
		}
		
	res++;

	}
	
	cout << q << "\n";
	
 }else{
	 
	int p = 0, res = 0, re = 0;
	
	res = b;
	
	for(int n = b; n < a; n++){
   	   
		re = res%2;
		
		if(re != 0){
			
			p = p + (res);
		
		}else{
			
		}
		
		res++; 	
	 
	}
	
	 cout << p << "\n"; 
	 
 }

 	return 0;
 	
}