#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int Curupira = 300, Boitata = 1500, Boto = 600, Mapinguari = 1000, Iara = 150;
	int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
	int qtdmdg = 0;
	
	cin >> p1 >> p2 >> p3 >> p4 >> p5;
	
	qtdmdg = (p1 * Curupira) + (p2 * Boitata) + (p3 * Boto) + (p4 * Mapinguari) + (p5 * Iara) + 225;
	
	cout << "\nTotal de mandioca necssaria em gramas: " << qtdmdg << "\n";
	
	return 0;
}