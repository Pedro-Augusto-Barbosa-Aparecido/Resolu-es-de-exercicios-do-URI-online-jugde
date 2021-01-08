#include <iostream>

using namespace std;

int main() {

	int qtdeAnswer = 0;
	string answer = "gzuz", question = "";

	cin >> qtdeAnswer;

	if ((qtdeAnswer >= 2) && (qtdeAnswer <= 99)) {
		for (int i = 0;i < qtdeAnswer;i++) {
			cin >> question;
			cout << answer << "\n";
		}
	}
	else {

	}

	return 0;
}