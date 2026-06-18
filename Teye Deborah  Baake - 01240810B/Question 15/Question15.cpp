#include <iostream>

using namespace std;

int main () {
	float x, y, larger;
	
	cout << "Input first floating nmber: ";
	cin >> x;
	
	cout << "Input second floating number: ";
	cin >> y;
	
	larger = (x > y) ? x : y;
	
	cout << "The larger number is: " << larger << endl;
	
	
	
	return 0;
}
