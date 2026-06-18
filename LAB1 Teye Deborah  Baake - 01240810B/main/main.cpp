#include <iostream>

using namespace std;

int main() {
	int a , b;
	double Sum;
	double Difference;
	double Product;
	double Quotient;
	
	cout << "Enter first integer: ";
	cin >> a;
	
	cout << "Enter second integer: ";
	cin >> b;
	
	cout << "a= " << a << "\n";
	cout << "b= " << b << "\n";
	
	Sum = a+b;
	cout << "The sum of a and b is: " << Sum << "\n";
	
	Difference = a-b;
	cout << "The difference of a and b is: " << Difference << "\n";
	
	Product = a*b;
	cout << "The product of a and b is: " << Product << "\n";
	
	Quotient = a/b;
	cout << "The quotient of a and b is: " << Quotient << "\n";
	 
	
	
	return 0;
}
