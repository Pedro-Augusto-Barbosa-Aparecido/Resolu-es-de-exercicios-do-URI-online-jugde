#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

	float x = 0.0, y = 0.0;
	
	cin >> x >> y;
	
	if((x > 0.0) && (y > 0.0)){
		cout << "Q1\n";
	}else if((x < 0.0) && (y > 0.0)){
		cout << "Q2\n";
	}if((x < 0.0) && ( y < 0.0)){
		cout << "Q3\n";
	}else if((x > 0.0) && (y < 0.0)){
		cout << "Q4\n";
	}if((x == 0.0) && (y == 0.0)){
		cout << "Origem\n";
	}else if(((x < 0.0) || (x > 0.0)) && (y == 0.0)){
		cout << "Eixo X\n";
	}if((x == 0.0) && ((y < 0.0) || (y > 0.0))){
		cout << "Eixo Y\n";
	}else{
		
	}

	return 0;
}