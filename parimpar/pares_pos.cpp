#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	
	double a = 0, s = 0, d = 0, f = 0, g = 0, h = 0;
	
	cin >> a >> s >> d >> f >> g >> h;
	
	double num[6] = {a, s, d, f, g, h};
	int pos = 0;
	
	for(int i = 0; i < 6; i++){
		
		if(num[i] > 0.00){
			pos++;
		}else{
			
		}
		
	}
	
	cout << pos << " valores positivos\n";
	
	return 0;
}