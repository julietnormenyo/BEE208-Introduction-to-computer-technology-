#include<iostream>
using namespace std;

int main(){
float voltage;	
	cin >> voltage;
	
	while(voltage >= 18){
		cout << "Voltage OK\n";
		cin >> voltage;
	}
	
	cout << "Voltage below operating level";
	
	
	return 0;
	
}
