#include <iostream>
using namespace std;

int main() {
	float V, I, R;
	char choice;
	
	do {
		cin >> V >> I;
		R = V/I;
		cout << "Resistance = " << R << endl;
		cin >> choice;
		
} while (choice == 'Y' || choice == 'y');

	return 0;
}
