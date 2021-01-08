#include <iostream>

using namespace std;

int main() {
 
	int e = 0, a = 0, d = 0;
	
	cin >> a;
	
	for (int i = 0; i < a; i++){
		cin >> e;
		
		d = e%2;
		
		if(d == 0){
			cout << "0" << "\n";
		}else{
			cout << "1" << "\n";
		}
	}
 
    return 0;
}