#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	
	int n = 0;
	
	cin >> n;
	
	int num[n];
	
	if(n < 10000){
		
		int a = 0;
		
		for(int i = 0; i < n; i++){
			
			cin >> a;
			if((a > -10000000) && (a < 10000000)){
			
			num[i] = a;
				
			}else{
				
			}
			
		}
	
	}else{
	
		
	}
	
	int res = 0, re = 0;
	
	for(int i = 0; i < n; i++){
		
		res = num[i];
		
		if(res != 0){
		
		re = res%2;
		
		if(re == 0){
			if(res > 0){
				cout << "EVEN POSITVE\n";
			}else{
				cout << "EVEN NEGATIVE\n";
			}
		}else{
			if(res > 0){
				cout << "ODD POSITVE\n";
			}else{
				cout << "ODD NEGATIVE\n";
				}
		   	}
		
	   	}else{
			   cout << "NULL\n";
		   }
	}

	return 0;
	
}