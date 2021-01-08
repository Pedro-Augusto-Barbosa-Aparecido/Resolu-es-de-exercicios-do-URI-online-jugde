#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

int num = 0, aux = 0, auxliador = 0, auxliador2 = 0, aux2 = 0, aux3 = 0, aux4 = 0, aux5 = 0, aux6 = 0;

cin >> num;

if((num > 0) && (num < 10)){
    cout << "numero digitado: " << num << "\n";
}else if((num >= 10) && (num < 100)){
    aux = num%10;
    if(aux != 0){
while(aux != 0){
   aux2 = num - auxliador;
   aux = aux2%10;
   if(aux != 0){
    auxliador += 1;
   }
}
aux3 = aux2/10;
}else{
aux3 = num/10;
}
printf("dezena: %d \nunidade: %d \n", aux3, auxliador);
}else if((num >= 100) && (num < 1000)){
    aux = num%100;
    if(aux != 0){
        while(aux != 0){
            aux2 = num - auxliador;
            aux = aux2%100;
            if(aux != 0){
                auxliador += 1;
            }
        }

    aux3 = auxliador%10;
    if(aux3 != 0){
        while(aux3 != 0){
            aux4 = auxliador - auxliador2;
            aux3 = aux4%10;
            if(aux3 != 0){
                auxliador2 += 1;
            }
        }
    }
    aux5 = aux2/100;
    aux6 = aux4/10;

    printf("centena: %d \ndezena: %d \nunidade %d \n", aux5, aux6, auxliador2);
    }else{
    aux5 = num/100;
    printf("centena: %d \ndezena: %d \nunidade %d \n", aux5, aux6, auxliador2);
    }
}else{
cout << "\n\nnumero nao aceito\n\n";
}



return 0;
}
