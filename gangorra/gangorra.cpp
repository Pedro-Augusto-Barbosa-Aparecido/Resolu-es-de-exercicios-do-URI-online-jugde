#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int p1 = 0, p2 = 0, c1 = 0, c2 = 0;
	int ladoesquerdo = 0, ladodireito = 0;
	
	cin >> p1 >> c1 >> p2 >> c2;
	
	if((p1 >= 10) && (p1 <= 100) && (p2 >= 10) && (p2 <= 100) && 
       (c1 >= 10) && (c1 <= 100) && (c2 >= 10) && (c2 <= 100)){
		   ladoesquerdo = p1 * c1;
		   ladodireito = p2 * c2;

		   if(ladoesquerdo == ladodireito){
			   cout << "0\n";
		   }else if(ladoesquerdo > ladodireito){
			   cout << "-1\n";
		   }else{
			   cout << "1\n";
		   }
		   
	   }else{
		   
	   }
	
	return 0;
}