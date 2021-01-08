#include <iostream>
#include <math.h>
using namespace std;

int main(){

int n = 0;

cin >> n;

int aux = 1, res = 0, pos = 0, quad = 0;
int numpar[n];

if((n > 5) && (n < 2000)){



    while(aux <= n){
        res = aux%2;
        if(res == 0){
        quad = pow(aux, 2);
        cout << aux << "^" << "2" << " = " << quad << endl;
        }else{
        }
        aux++;
    }

}else{
}

return 0;
}
