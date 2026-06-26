#include<iostream>
using namespace std;

int main(){
	int choice;
	
	cout << "Fuse menu:\n";
	cout << "1. 5A fuse\n5. 10A fuse\n3. 13A fuse\n4. 20A fuse\n5. 32A fuse\n";
	cout << "Enter choice: ";
	cin >> choice;
	
	switch(choice){
		case 1: cout << "Used for small electronics";
		 break;
		case 2: cout << "Used for home lighting circuits";
		break;
		case 3: cout << " Used for medium load devices";
		break;
		case 4: cout << "Used for heavy appliances";
		break;
		case 5: cout << "Used for industrial loads";
		break;
		default: cout << "Invalid choice";
		
		
	}
	
	return 0;
	
}
