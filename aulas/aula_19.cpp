#include <iostream>

using namespace std;

int main(){
	int matriz[5][7];
	int x, y;
	for (x = 0; x < 5; x++){
		for (y = 0; y < 7; y++){
			cin >> matriz[x][y];
		}
	}
	for (x = 0; x < 5; x++){
		for (y = 0; y < 7; y++){
			cout << matriz[x][y];
		}
		cout << "\n\n";
   }
	return 0;
} 
