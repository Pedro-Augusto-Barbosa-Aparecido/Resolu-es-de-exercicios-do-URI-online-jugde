#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

	int x = 1;
	
	while(x != 0){
		
		cin >> x;
		
		for(int i = 0; i < x; i++){
			
			x += 1;
			
			cout << x << " ";
			
		}
		
		cout << "\n";
		
	}
	
	return 0;
}