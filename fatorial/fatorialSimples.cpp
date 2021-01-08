#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n = 0, resfa = 0, aux = 1;
	int res[1000];
	
	cin >> n;
	resfa = n;
	if((n > 0) && (n < 13)){
	for(int i = 0; i < (n-1); i++){
        res[i] = aux++;
	}
	for(int i = 0; i < (n-1); i++){
		resfa = resfa * res[i];
	}
	cout << resfa << "\n";	
	}else{
		
	}
	
	return 0;
}