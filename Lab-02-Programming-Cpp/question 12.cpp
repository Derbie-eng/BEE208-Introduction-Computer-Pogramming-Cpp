#include <iostream>
using namespace std;

int main()
{
	float voltage;
	
	cout << "Enter Solar Panel Voltage (V):";
	cin >> voltage;
	
	while (voltage >=18)
	{
		cout << "Voltage is within operating level." << endl;
		cout << "Enter Solar Panel Voltage(V):";
		cin >> voltage;
	}
	
	cout << "Spolar panel voltage below operating level." << endl;
	
	return 0;
	
}
