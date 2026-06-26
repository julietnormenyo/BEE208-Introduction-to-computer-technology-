#include<iostream>
using namespace std;
int main(){
int choice;	
	float value;
	
	cout << "1. Volts to mV\n2. Amps to mA\n3. kW to W\n4. Ohms to kOhms\n";
	cout << "Enter choice:";
	
	cout << "Enter value:";
	cin >> value;
	
	switch(choice){
		case 1: 
		cout << value << " V = " << value * 1000 << " mV ";
		break;
		case 2: 
		cout << value << " A = " << value * 1000 << "mA";
		break;
		case 3: 
		cout << value << " kW = " << value * 1000 << "kW";
		break;
		case 4: 
		cout << value << " ohm = " << value * 1000 << "kohm";
		break;
		default:
		 cout << "Invalid choice";
		
	}
	
	return 0;
	

}
