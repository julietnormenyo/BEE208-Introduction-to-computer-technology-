#include<iostream>
using namespace std;

int main(){
	string code;
	int attempts;
	
	while(attempts < 3){
		cin >> code;
		
		if (code == "BEE208"){
			cout << "Access granted";
			return 0;
			
		}else {
			attempts++;
		}
		
		}
	cout << "Access denied. Maximum attempts reached";
	
	
	return 0;
	
}
