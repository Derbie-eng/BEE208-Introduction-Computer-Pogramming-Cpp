#include <iostream>

using namespace std;

int main () {
	int num;
	
	cout << "Enter a number: ";
	cin >> num;
	
	if (num % 2 != 0 && num & 3 == 0) {
		cout << num << "is both odd and divisible by 3" << endl;
		
		
	}else {
		cout << num << "is not odd and not divisible by 3" << endl;
	}
	
	
	
	return 0;
}
