#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	double equal;
	
	
	cout << "Input a: ";
	cin >> a;
	
	cout << "Input b: ";
	cin >> b;
	
	cout << "Input c: ";
	cin >> c;
	
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "c= " << c << endl;
	
	if(a == b && b == c){
		
		cout << "Equal" << endl;
		
} else {
	cout << "Not Equal" << endl;
	
}

system("pause");

    return 0;
}
