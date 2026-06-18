#include <iostream>

using namespace std;

int main () {
	int a;
	
	cout << "Input number: ";
	cin >> a;
	
	if (a > 0 && (a & (a - 1)) == 0){
		cout << a << " is a power of 2" << endl;
		
	} else {
		cout << a << " is not a power of 2" << endl;
	}
	
	
	return 0;
}
