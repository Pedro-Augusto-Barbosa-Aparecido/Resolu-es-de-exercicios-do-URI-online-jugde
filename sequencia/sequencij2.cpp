#include <iostream>
#include <stdio.h>

using namespace std; 

int main(int argc, char** argv)
{
  	  int i = 1, j = 7, q = 0, w = 0;
	
	//cout << "I=" << i << " " << "J=" << j << "\n"; 
	
	while(q < 5){
		while(w < 3){
			cout << "I=" << i << " " << "J=" << j << "\n";
			j -= 1; 
			w++;
		}
		w = 0;
		j = 7;
		i += 2;
		q++;
	}
	
	return 0;
}
