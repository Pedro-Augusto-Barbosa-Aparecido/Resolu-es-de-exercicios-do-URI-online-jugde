#include <iostream>
#include <vector>

using namespace std;

int main(){
int x = 0, y = 0;
int aux = 0, aux2 = 0;
vector <int> nuns;

cin >> x >> y;

if(x > y){
    aux = y + 1;
    while(aux != x){
        aux2 = aux%5;
        if((aux2 == 2) || (aux2 == 3)){
            nuns.push_back(aux);
        }
        aux++;
    }
}else{
    aux = x + 1;
    while(aux != y){
        aux2 = aux%5;
        if((aux2 == 2) || (aux2 == 3)){
            nuns.push_back(aux);
        }
        aux++;
    }
}

int tam = (sizeof(nuns)/4) - 3;

for(int i = 0; i < tam; i++){
    cout << nuns[i] << "\n";
}

return 0;
}
