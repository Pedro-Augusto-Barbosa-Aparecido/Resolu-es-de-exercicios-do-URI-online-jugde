#include <iostream>
#include <vector>

using namespace std;

int main(){

int m = 1, n = 1, trava = 0;
vector <int> nuns_m, nuns_n;

while(trava == 0){
    cin >> m >> n;
    if((m > 0) && (n > 0)){
    nuns_m.push_back(m);
    nuns_n.push_back(n);
    }else{
    trava = 1;
    }
}

if(nuns)

/*
cout << "\n\n";

int tam_m = (sizeof(nuns_m) / 12);
int tam_n = (sizeof(nuns_n) / 12);

for(int i = 0; i < tam_m; i++){
    cout << nuns_m[i] << "\n";
}

for(int i = 0; i < tam_m; i++){
    cout << nuns_n[i] << "\n";
}
*/
return 0;
}
