#include <iostream>
#include <stdio.h>

using namespace std;

double peri(double l1, double l2, double l3);
double are(double b1, double b2, double h);

int main(int argc, char** argv)
{
	double a = 0.0, b = 0.0, c = 0.0, soma = 0.0;
	double area = 0.0, perimetro = 0.0, modulo = 0.0;
	bool triangulo = false;
	
	cin >> a >> b >> c;
	
	if(a > b && a > c){
		soma = b + c;
		modulo = b - c;
		if(modulo < 0){
			modulo = modulo * (-1);
		}else{
			
		}
		if((soma > a) && (a > modulo)){
			triangulo = true;
		}else{
			triangulo = false;
		}
	}else if(b > a && b > c){
		soma = a + c;
		modulo = a - c;
		if(modulo < 0){
			modulo = modulo * (-1);
		}else{
			
		}
		if((soma > b) && (b > modulo)){
			triangulo = true;
		}else{
			triangulo = false;
		}
	}else{
		soma = a + b;
		modulo = b - a;
		if(modulo < 0){
			modulo = modulo * (-1);
		}else{
			
		}
		if((soma > c) && (c > modulo)){
			triangulo = true;
		}else{
			triangulo = false;
		}	
	}
	
	if(triangulo == true){
		perimetro = peri(a, b, c);
		printf("Perimetro = %.1f", perimetro);
	}else if(triangulo == false){
		area = are(a, b, c);
		printf("Area = %.1f", area);
	}
	
	return 0;
}

double peri(double l1, double l2, double l3){
	double perimetro = 0.0;
	
	perimetro = l1 + l2 + l3;
	
	return perimetro;
	
}

double are(double b1, double b2, double h){
	double areat = 0.0;
	
	areat = ((b1 + b2) * h)/2.0;
	
	return areat;
	
}
