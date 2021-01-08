#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int x, y;
	
	while(x != 0 && y != 0)
	{
		cin >> x >> y;
		
		if((x > 0) && (y > 0)){
			cout << "primeiro\n";
		}else{
			
		}if((x > 0) && (y < 0)){
			cout << "quarto\n";
		}else{
		
		}if((x < 0) && (y > 0)){
			cout << "segundo\n";
		}else{
			
		}if((x < 0) && (y < 0)){
			cout << "terceiro\n";
		}else{
			
		}
	}
	
	return 0;
}