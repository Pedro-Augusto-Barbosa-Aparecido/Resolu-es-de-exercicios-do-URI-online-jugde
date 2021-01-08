/*
Autor da resolucao do exercicio: Pedro Augusto
Data: 31/08/2020

Exercicio: Extremamente basico

#include <iostream>

using namespace std;

int extrem_basico(int a = 0, int b = 0);

int main(int argc, char** argv)
{
	
	int a = 0, b = 0;
	
	cin >> a >> b;	
	
	int x = extrem_basico(a, b);
	
	cout << "X = " << x << "\n";
	
	
	return 0;
}

int extrem_basico(int a, int b){
	return a + b;
}

*/

/*

Autor da resolucao do exercicio: Pedro Augusto
Data: 31/08/2020

Exercicio: Area do circulo

*/

#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	double raio = 0.0;
	double n = 3.14159;
	
	cin >> raio;
	
	double ar = n * pow(raio, 2);
	
	cout << fixed << setprecision(4);
	
	cout << ar;
	
	return 0;
}