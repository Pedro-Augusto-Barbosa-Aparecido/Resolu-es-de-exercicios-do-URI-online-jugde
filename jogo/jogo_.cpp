#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

char conf = '\0';
char palavra[100];

cout << "Digite uma palavra de sua escolha...: ";

cin >> palavra;

int tam = sizeof(palavra);

for(int i = 0; i < tam; i++){
    if(conf == palavra[i]){

    }else{
    cout << palavra[i];
    }
}

cout << endl;

return 0;
}
