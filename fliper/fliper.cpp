#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int p = 0, r = 0;
	
	cin >> p >> r;
	
	if(((p == 0) || (p == 1)) && ((r == 0) || (r == 1))){
		if((p == 1) && (r == 1)){
			cout << "A\n";
		}else if((p == 1) && (r == 0)){
			cout << "B\n";
		}else{
			cout << "C\n";
		}
	}else{
		
	}
	
	return 0;
}