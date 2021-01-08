#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
int n = 0, x = 0, aux = 0, aux2 = 0;
int cont = 0, primo = 0;

cin >> n;

if((n >= 1) && (n <= 100)){
    cin >> x;
    while((x > 0) && (x <= 10000000)){
        for(int i = 1; i <= x; i++){
            aux2 = x%2;
            aux = x%i;
            if((aux == 0) && ((i == 1) || (i == x)) && (aux2 != 0)){
                cont++;
    if(cont == 2){
        primo = x;
        printf("%d eh primo\n", primo);
    }
            }
        }if(cont == 1){
        printf("%d nao eh primo\n", x);
        }
    }

}else{

}

return 0;
}
