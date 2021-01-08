#include <iostream>

using namespace std;

int main(){

int idade = 0, ano = 0, mes = 0, dia = 0, aux = 0;
int aux2 = 0;

cin >> idade;

if(idade >= 0){

aux = idade;

while(aux2 >= 0){
    aux2 = idade - 365;
    ano++;
}

idade = aux;

while(aux2 >= 0){
    aux2 = idade - 30;
    mes++;
}

cout << ano << mes << dia << endl;

}else{
    cout << "IDADE NAO PERMITIDA";
}

return 0;
}
