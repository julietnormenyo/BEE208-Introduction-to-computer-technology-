#include <iostream>
using namespace std;

int main(){
float power, totalLoad = 0;	
	
	for (int i = 1; i <= 20; i++){
		cout << "Enter power rating of appliance " << i << "(W):";
		cin >> power;
		
		totalLoad += power;
		
		if (totalLoad > 5000){
			cout << "Maximum loadd exceeded. Stop adding appliances. " << endl;
			break;
			
		}
		
	} 
	
cout << "Final total Load = " << totalLoad <<  "W" << endl;	


return 0;	
 
}
