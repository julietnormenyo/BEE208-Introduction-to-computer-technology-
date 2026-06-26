#include <iostream>
using namespace std;

int main() {
	float r;
	
	for (int i = 0; i < 10; i++) {
		cin >> r;
		
		if (r < 1) {
			cout << "Insulation failure detected. Test stopped";
			break;
			
		} else {
			cout << "Insulation acceptable\n";
		}
	}

	return 0;
}
