#include <iostream>
#include <cctype>

using namespace std;


int main(){
	char ch;
	
	cout << "Input character: ";
	cin >> ch;
	
if (isupper(ch) && true) {
	cout << "Uppercase Letter" << endl;
	
} else {
	cout << "Not an Uppercase Letter" << endl;
}
	return 0;
}
