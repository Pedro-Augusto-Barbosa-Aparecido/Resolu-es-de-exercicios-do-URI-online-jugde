#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv)
{

	char *nome;
	
	nome = (char *) malloc(sizeof(char) + 1);
	
	gets(nome);
	
	cout << "\n" << nome << "\n";
		
	return 0;
}