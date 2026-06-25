#include <iostream>
using namespace std;

int main()
{
	float voltage, current, power;
	char choice;
	
	do
	{
		cout << "Enter Voltage(V): ";
		cin >> voltage;
		
		cout << "Enter Current(A): ";
		cin >> current;
		
		power = voltage * current;
		
		cout << "Power =" << power << "W" << endl;
		cout << "Do you want another calculation? (Y/N):";
		return 0;
	}
}
