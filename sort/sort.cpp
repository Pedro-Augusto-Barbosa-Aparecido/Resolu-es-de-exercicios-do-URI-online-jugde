#include <iostream>
#include <list>

using namespace std;

int main(int argc, char** argv)
{

	list <int> nuns;
	int num[3];
	int a = 0;
	
	for(int i = 0; i < 3; i++){
		
		cin >> a;
		num[i] = a;
		nuns.push_front(a);
		
	}

	nuns.sort();
	
	for(int i = 1; i < 4; i++){
		
		cout << nuns.front() << "\n";
		nuns.pop_front();
		
	}
	
	cout << "\n";
	
	for(int i = 0; i < 3; i++){
		
		cout << num[i] << "\n";
		
	}
		
	return 0;
}