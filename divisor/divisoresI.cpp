#include <iostream>
#include <list>
using namespace std;

int main(int argc, char** argv)
{
	
	int x = 0, y = 0, a = 0, tam = 0;
	list <int> res;
	
	cin >> x;
	
	a = x;
	
	for(int i = 0; i < x; i++){
		
		y = x%a;
		
		if(y == 0){
		//	cout << a << "\n";
			res.push_front(a);
		}
		
		a--;
	}
	
	//cout << "Tamanho da lista : " << res.size() << "\n";
	
	tam = res.size();
	
	while(tam != 0)
	{
		cout << res.front() << "\n";
		res.pop_front();
		tam = res.size();
	}
	
	return 0;
}