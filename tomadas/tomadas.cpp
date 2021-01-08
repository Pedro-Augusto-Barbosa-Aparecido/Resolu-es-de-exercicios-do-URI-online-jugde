#include <iostream>

using namespace std;

int main(int argc, char** argv)
{nn
	int t1 = 0, t2 = 0, t3 = 0, t4 = 0;
	int numTomadas = 0;

	cin >> t1 >> t2 >> t3 >> t4;

	if((t1 > 1) && (t1 < 7) && (t2 > 1) && (t2 < 7) && (t3 > 1) && (t3 < 7) &&
	    (t4 > 1) && (t4 < 7)){

			numTomadas = t1 + t2 + t3 + t4 - 3;

		}else{

		}

	cout << numTomadas << "\n";

	return 0;
}
