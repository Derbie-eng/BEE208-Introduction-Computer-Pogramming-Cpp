#include <iostream>
using namespace std;

int main()
{
	double wattage, totalPower = 0;
	
	for(int i = 1; i = 12; i++)
	{
		cout << "Enter wattage of lighting point" << i <<":";
		cin >> wattage;
		
		totalPower = totalPower + wattage;
	}
	
	cout << "\nTotal Lighting load =" << totalPower << "W" << endl;
	
	return 0;
		
	}

