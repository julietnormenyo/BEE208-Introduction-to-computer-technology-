#include <iostream>
using namespace std;

int main() {
	float V, I, P;
	char choice;
	
	do{
		cin >> V >> I;
		P = V * I;
		cout << "Power = " << P << endl;
		
		cin >> choice;
		
	} while (choice == 'Y' || choice == 'y');
	
	return 0;
}
