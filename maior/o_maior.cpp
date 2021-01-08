#include <iostream> 
#include <stdlib.h>

using namespace std;

int main() {
	
	int a = 0, b = 0, c = 0;
	int maiorAB = 0,maior = 0;
	
	cin >> a >> b >> c;
	
	maiorAB = (a + b + abs(a - b))/2;
	maior = (maiorAB + c + abs(maiorAB - c))/2;
	
	cout << maior << " eh o maior.\n";
    return 0;
}

