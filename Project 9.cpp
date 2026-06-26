#include<iostream>
using namespace std;

int main(){
int pass = 0, fail = 0, result;	
	
	for(int i = 0; i < 15; i++){
		cin >> result;
		if(result == 1)
		pass++;
		else
		fail++;
	}
	cout << "Passed = " << pass << endl;
	cout << "Failed = " << fail << endl;
	
	
	
	return 0;
	
	
}
