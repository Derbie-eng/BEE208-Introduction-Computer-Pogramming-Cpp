#include <iostream>
#include <cmath>

using namespace std;


int main() {
	int r;
	double Area;
	const double pi = 3.1416;
	
	cout << "Input radius: ";
	cin >> r;
	
	cout << "r= " << r << "\n";
	
	Area = pi * pow(r, 2);
	
	cout << "Area of the circle with radius r is: " << Area << endl;
	
	system("pause");
	
	return 0;
}
