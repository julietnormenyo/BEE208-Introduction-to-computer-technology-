#include <iostream>
using namespace std;
int main(){
double reading,total= 0;
int validCount= 0;
cout<<"Enter 10 power readings from montoring system:";
for(int i =1 ; i <= 10; i++) { 
cout <<"Reading"<< i<<":";
cin >> reading;
if(reading < 0) {
	cout<<"Invalid reading skipped.";
	continue;
}
total += reading;
validCount++;
}
cout<<"\nTotal of "	<< validCount <<" valid power readings =" <<total <<"W";
system("pause");
	return 0;
}


