#include<iostream>
using namespace std;

int main(){
	float temp;
	cin >> temp;
	
	while(temp <= 90){
		cout << "Motor safe\n";
		cin >> temp;
	}
	cout << "Motor temperature unsafe. Stop test";
	
	
	return 0;
	
	
}
