#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n = 0, m = 0;
	int pressao_desejada = 0;
 	
	cin >> n;
	
	if((n > 0) && (n < 41)){
		
	cin >> m;	
		
		if((m > 0) && (m < 41)){
			
		pressao_desejada = n - m;	
		cout << pressao_desejada << "\n";	
		
		}else{
			
		}
		
	}else{
		
	}
	
	return 0;
}