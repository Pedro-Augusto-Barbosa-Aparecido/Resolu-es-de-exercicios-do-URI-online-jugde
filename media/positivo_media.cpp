#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{

	float a = 0, s = 0, d = 0, f = 0, g = 0, h = 0;
	int pos = 0;
	float media = 0.0, aux = 0.0;
	
	cin >> a >> s >> d >> f >> g >> h;
	
	aux = a + s + d + f + g + h;
	
	float nuns[6] = {a, s, d, f, g, h};
	
	for(int i = 0; i < 6; i++){
		if(nuns[i] > 0){
			pos++;
		}else{
			
		}
		
	}
	
	media = aux/2;
	
	cout << pos << " valores positivos\n" << media << "\n";
	
	return 0;
}