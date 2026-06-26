#include<iostream>
using namespace std;

int main(){
	float power, time, total =0;
	
	for(int i = 0; i < 8; i++){
		cin >> power >> time;
		total += power * time;
		
		
	}
	cout << "Total energy = " << total << " wh ";
	
	return 0;
	
	
}
