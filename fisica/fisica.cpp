#include <iostream>

using namespace std;

int main(){

    int v=0, t=0, a=0;

    cin >> v >> t;

    if(((v>(101*-1))&&(v<101))&&((t>=0)&&(t<201))){
        a=v*t*2;
        cout << a;
    }

    return 0;
}
