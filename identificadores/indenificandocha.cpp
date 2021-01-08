#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int t = 0;
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	int total_acertos = 0;
	
	cin >> t;
	
	if((t > 0) && (t < 5)){
       cin >> a >> b >> c >> d >> e;
       
	   if ((a > 0) && (a < 5) && (b > 0) && (b < 5) && (c > 0) && 
	       (c < 5) && (d > 0) && (d < 5) && (e > 0) && (e < 5)){
	   	
	   int respostas[5] = {a, b, c, d, e};
	   for(int i = 0; i < 5; i++){
		   if(t == respostas[i]){
			   total_acertos++;
		   }
	   }
	}
	}else{
		
	}
	
	cout << "\nTotal de acertos : " << total_acertos << "\n";
	
	return 0;
}