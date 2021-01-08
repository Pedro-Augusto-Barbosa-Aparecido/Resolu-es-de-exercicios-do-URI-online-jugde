#include <iostream>

using namespace std; 

int main(int argc, char** argv)
{
    int i = 1, j = 60;
	
	cout << "I=" << i << " " << "J=" << j << "\n"; 
	
	while(j != 0){
		j -= 5;
		i += 3;
		cout << "I=" << i << " " << "J=" << j << "\n"; 
	}	
	return 0;
}