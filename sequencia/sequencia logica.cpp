#include <iostream>

using namespace std;

int main(){

int n = 0, naux = 1, conta = 0;

cin >> n;

if((n > 1) && (n < 1000)){

    while(naux < n+1){

       cout << naux << " " << naux*naux << " " << naux*naux*naux << " " << endl;
       cout << naux << " " << naux*naux+1 << " " << naux*naux*naux+1 << " " << endl;
       naux++;

    }

}else{
}

return 0;
}
