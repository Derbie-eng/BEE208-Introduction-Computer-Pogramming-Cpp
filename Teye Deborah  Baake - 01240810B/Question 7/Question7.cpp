#include <iostream>
#include <string>

using namespace std;

int main (){
	string user_Input;
	
	cout << "Enter a string: ";
	getline(cin, user_Input);
	
	
if (user_Input.find('a') != string::npos ) {
	cout << "Contains 'a'" << endl;
	
	
}else {
	cout << "Does not contain 'a' " << endl;
	
}
	
	return 0;
}
