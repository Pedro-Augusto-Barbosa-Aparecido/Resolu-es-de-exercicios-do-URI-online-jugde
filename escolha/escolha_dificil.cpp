#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	
	int availableFood[3],oddersFood[3],rest=0;
	
	bool verif=false;
	
	for(int i=0;i<3;i++){
		cin >> availableFood[i];
		if((availableFood[i]<0)||(availableFood[i]>100)){
			verif=true;
			i+=3;
		}
	}
	
	if(!verif){
		for(int i=0;i<3;i++){
			cin >> oddersFood[i];
			if((oddersFood[i]<0)||(oddersFood[i]>100)){
				verif=true;
				i+=3;
			}
		}
		
		
		for(int i=0;i<3;i++){
			if(availableFood[i]<oddersFood[i]){
				rest+=oddersFood[i]-availableFood[i];
			}
		}
		
		cout << rest;
	}
	
	return 0;
}