#include <iostream>
#include <list>

using namespace std;

int main(int argc, char** argv)
{
	list <int> ff;
	list <int>::iterator it;
	
	int nuns[10];
	
	for(int i = 0; i < 10; i++){
		nuns[i] = i;
	} 
	
	for(int i = 0; i < 10; i++){
		ff.push_front(nuns[i]);
	} 
	
	it = ff.begin();
	advance(it,7);
	ff.insert(it,13);
	
	for(int i = 0; i < 11; i++){
		cout << ff.back() << "\n";
		ff.pop_back();
	}
		
	cout << "\n\n";
	return 0;
}