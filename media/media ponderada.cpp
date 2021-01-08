#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int main(){

int n = 0;
float n1 = 0.0, n2 = 0.0, n3 = 0.0;
vector <float> num1, num2, num3, media;

cin >> n;

if(n > 0){
    for(int i = 0; i < n ; i++){
        cin >> n1 >> n2 >> n3;
        num1.push_back(n1);
        num2.push_back(n2);
        num3.push_back(n3);
    }

    for(int i = 0; i < n; i++){
        media.push_back(0);
    }

    for(int i = 0; i < n; i++){
        media[i] = ((num1[i] * 2) + (num2[i] * 3) + (num3[i] * 5)) / 10;
    }
    for(int i = 0; i < n; i++){
    printf("%.1f", media[i]);
    }

}else{

}

return 0;
}
