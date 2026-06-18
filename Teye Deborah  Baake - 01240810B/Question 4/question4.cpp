#include <iostream>
#include <string>

using namespace std;

int main(){
	string Input;
	
	cout << "Input a string: ";
	cin >> Input;
	
	if (Input == "Hello") {
		cout << "Hello" << endl;
		
	} else {
		cout << "Goodbye" << endl;
	}
	
	
	return 0;
}
