#include<iostream>
using namespace std;

int main(){
	float vp, vs, np, ns;
	
	cout << "Enter the primary voltage: ";
	cin >> vp;
	
	cout << "Enter the secondary voltage:";
	cin >> vs;
	
	cout << "Enter the primary turns:";
	cin >> np;
	
	cout << "Enter the secondary turns:";
	cin >> ns;
	
	cout << "Voltage ratio (Vp/Vs): " << vp / vs << endl;
	cout << "Turns ratio (Np/Ns): " << np/ns << endl;
	
	return 0;
	
}
