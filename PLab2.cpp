#include <iostream>
using namespace std;

int main() {
	int hem[7];
	int buf;
	hem[0] = 0; hem[1] = 0;

	cout << "enter 4 numbers (0,1)" << endl;
	for (int i = 2; i < 7; i++) {
		if (i == 3) continue;
			cin >> buf;
			if (buf != 0 && buf != 1) {
				cout << "0 and 1!!!" << endl << "I'm offended" << endl;
				return -1;
			}
			else hem[i] = buf;
		
	}
	hem[0] = (hem[2] + hem[4] + hem[6]) % 2;
	hem[1] = (hem[2] + hem[5] + hem[6]) % 2;
	hem[3] = (hem[4] + hem[5] + hem[6]) % 2;

	cout << "I have cast my blessing on this message" << endl;
	for (int i = 0; i < 7; i++) {
		cout << hem[i];
	}
	

	return 0;
}
