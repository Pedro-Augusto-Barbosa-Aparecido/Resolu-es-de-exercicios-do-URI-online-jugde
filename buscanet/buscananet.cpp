#include <iostream>
#include <stdio.h>

using namespace std; 

int main(int argc, char** argv)
{

	int numpclic = 0, seg = 0, first = 0;
	
	cin >> numpclic;
	
	if((numpclic >= 1) && (numpclic <= 1000)){
		seg = numpclic * 2;
		first = seg * 2;
		cout << first << "\n";
	}else{
		
	} 
	
	return 0;
}
