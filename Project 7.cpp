#include<iostream>
using namespace std;

int main(){
int watt, total = 0;

for(int i = 0; i < 12; i++){
	cin >> watt;
	total += watt;
	
	
}	
	
cout << "Total power = " << total << " W ";	

	
	return 0;
	
}
