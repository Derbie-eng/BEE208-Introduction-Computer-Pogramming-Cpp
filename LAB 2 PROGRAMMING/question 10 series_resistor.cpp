#include <iostream>
using namespace std;

int main(){
	float resistance, total = 0;
	
	for (int i=1; i <= 5; i++){
		cout << "Enter value of R" << i << " (Ohms): ";
		cin >> resistance;
		total = total + resistance;
}
	
	cout << "Total resistance = " << total << "Ohms" << endl;
	
	return 0;
}
