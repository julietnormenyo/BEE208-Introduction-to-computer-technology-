#include<iostream>
using namespace std;

int main(){
	float rated, start;
	
	cout << "Enter rated current: ";
	cin >> rated;
	
	cout << "Enter starting current: ";
	cin >> start;
	
	if (start > 3 * rated)
	cout << "High starting current. Use proper motor starter.";
	
	else
	cout << "Starting current is acceptable.";
	
	return 0;
	
}
