#include <iostream>
#include <list>

using namespace std;

int main(int argc, char** argv)
{
	list <int> nuns2, nuns1;
	list <int>::iterator it;
	int tam = 0;
	
	cin >> tam;
	
	for(int i = 0; i < tam; i++){
		nuns2.push_front(2);
		nuns1.push_front(1);
	}
	
	it = nuns2.begin();
	
	nuns2.merge(nuns1);
	
	for(int i = 0; i < (2 * tam); i++){
		cout << nuns2.front() << "\n";
		nuns2.pop_front();
	}
	
	nuns2.clear();
	
	cout << "\nTamanho da lista depois do comando clear: " << nuns2.size() << "\n";
	
	return 0;
}