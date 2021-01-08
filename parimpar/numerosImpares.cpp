#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int x = 0, y = 1, res = 0;
	
	cin >> x;
	
	if((x > 0) && (x < 1001)){
		for(int i = 0; i < x; i++){
			res = y%2;
		
			if(res != 0){
				cout << y << "\n";
			}else{
				
			}
		y++;
		}
	}else{
		
	}
	return 0;
}