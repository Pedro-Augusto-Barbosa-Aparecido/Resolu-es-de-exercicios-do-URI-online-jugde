#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int num = 0;
	
	cin >> num;
	
	int horas = 0, minutos = 0, segundos = 0;
	
	horas = num / 3600;
	minutos = (num%3600) / 60;
	segundos = num%60;
	
	cout << horas << ":" << minutos << ":" << segundos;
	
	return 0;
}