#include <iostream>

using namespace std;

int main(){

int x = 0, i = 0;

cin >> x;

while(x != 0){
    for(i = 1; i < x; i++){
        cout << i << " ";
    }cout << i << "\n";
    cin >> x;
}

return 0;
}
