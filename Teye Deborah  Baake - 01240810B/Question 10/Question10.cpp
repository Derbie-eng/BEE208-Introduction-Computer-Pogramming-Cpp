#include <iostream>

using namespace std;

int main (){
	int x, y;
	
	cout << "Input first integer: ";
	cin >> x;
	
	cout << "Input second integer: ";
	cin >> y;
	
	int larger = (x > y) ? x : y;
	
	cout << "The larger number is: " << larger << endl;
	
	
	return 0;
}
