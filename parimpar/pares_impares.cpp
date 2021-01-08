#include <iostream>
#include <list>

using namespace std;

int main(int argc, char** argv)
{	

	int N = 0, A = 0;
	int aux = 0;
	
	cin >> N;
	
	if((N > 1) && (N < 100000)){
		list <int> impar, par;
		
		for(int i = 0; i < N; i++){
			cin >> A;
		if(A > 0){
			aux = A%2;
			if(aux == 0){
				par.push_front(A);
			}else{
				impar.push_front(A);
			}
		}else{
			
		}	
	}
	
	cout << "\n\n";
	
	int tam_par = par.size();
	int tam_impar = impar.size();
		
	par.sort();
	impar.reverse();
	
	for(int i = 0; i < (tam_par); i++){
		cout << par.front() << "\n";
		par.pop_front();
	}
	
	for(int i = 0; i < (tam_impar); i++){
		cout << impar.front() << "\n";
		impar.pop_front();
	}
	
	}else{	
		
	}
		
return 0;

}