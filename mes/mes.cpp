#include <iostream>

using namespace std;

int main(){

int num = 0, nume = 0;
string meses[13] = {" ", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
cin >> num;

if((num > 0) && (num < 13)){
    cout << meses[num] << "\n";
}else{
}

return 0;
}
