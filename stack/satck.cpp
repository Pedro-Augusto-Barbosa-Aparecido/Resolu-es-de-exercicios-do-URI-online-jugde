#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char** argv)
{
	stack <string> armas;
	string weapon[5] = {"desert_eagle", "g18", "ak47", "scar", "m60"};

	for(int i = 0; i < 5; i++){
		armas.push(weapon[i]);
	}
    for(int i = 0; i < 6; i++){
    	cout << armas.size() << "---------------------------------------------\n";
		cout << armas.top() << "\n";
		armas.pop();
	}	
	return 0;
}