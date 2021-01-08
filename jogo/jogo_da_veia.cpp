#include <iostream>

using namespace std;

void pedeinf();
bool verificao();

char jogo[3][3];
char inf;

int main()
{	
	
	for(int a = 0; a < 3; a++){
		for(int i = 0; i < 3; i++){
			jogo[a][i] = 'p';
			cout << jogo[a][i] << "\n";
		}
	}
	for(int d = 0;d < 9; d++){	
    pedeinf();
	}
	verificao();
	for(int a = 0; a < 3; a++){
		for(int i = 0; i < 3; i++){
			cout << jogo[a][i] << "\n";
		}
	}
	return 0;
}

void pedeinf(){
	
	int c = 0, l = 0;
	cin >> c >> l >> inf;
	jogo[c][l] = inf;
	
}

bool verificao(){
	char v1x[3][3] = {('x','o','o'),
			  		 ('o','x','o'),
					 ('o','o','x')};
					 
    char v2x[3][3] = {('x','x','x'),
					 ('o','o','o'),
					 ('o','o','o')};
					 
	char v3x[3][3] = {('o','o','o'),
					 ('x','x','x'),
					 ('o','o','o')};
					 
	char v4x[3][3] = {('o','o','o'),
					 ('o','o','o'),
					 ('x','x','x')};
					 
	char v5x[3][3] = {('o','o','x'),
					 ('o','x','o'),
					 ('x','o','o')};
					 
    char v6x[3][3] = {('x','o','o'),
					 ('x','o','o'),
					 ('x','o','o')};
					 
    char v7x[3][3] = {('o','x','o'),
					 ('o','x','o'),
					 ('o','x','o')};
					 
	char v8x[3][3] = {('o','o','x'),
					 ('o','o','x'),
					 ('o','o','x')};
					 
	 char v9o[3][3] = {('o','x','x'),
				   	   ('x','o','x'),
					   ('x','x','o')};
					 
	 char v9o[3][3] = {('o','x','x'),
					   ('x','o','x'),
					   ('x','x','o')};
					 
	 char v9o[3][3] = {('o','x','x'),
					   ('x','o','x'),
					   ('x','x','o')};
					 
	 char v9o[3][3] = {('o','x','x'),
					   ('x','o','x'),
					   ('x','x','o')};
					 
	 char v9o[3][3] = {('o','x','x'),
					   ('x','o','x'),
					   ('x','x','o')};
					 
	 char v9o[3][3] = {('o','x','x'),
					   ('x','o','x'),
					   ('x','x','o')};
					 
	 char v9o[3][3] = {('o','x','x'),
					 ('x','o','x'),
					 ('x','x','o')};
					 
	 char v9o[3][3] = {('o','x','x'),
					 ('x','o','x'),
					 ('x','x','o')};
					 
}