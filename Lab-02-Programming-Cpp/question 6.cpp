#include <iostream>
using namespace std;

int main()
{
	int choice;
	double primaryTurns, secondaryTurns;
	double primaryVoltage, secondaryVoltage;
	double result;
	
	cout << "Transformer Ratio Calculator Menu" << endl;
	cout << "1. Calculate Turns Ratio" << endl;
	cout << "2.Calculate Secondary Voltage" << endl;
	cout << "Calculate Primary Voltage" << endl;
	
	cout << "n\Enter your choice: ";
	cin >> choice;
	
	switch(choice)
	{
		case 1:
			cout << "Enter Primary Turns:";
			cin >>primaryTurns;
			
			cout << "Enter Secondary Turns:";
			cin >> secondaryTurns;
			
			result = primaryTurns/secondaryTurns;
			cout << "Turns Ratio =" << result << endl;
			break;
			
		case 2:
			cout << "Enter Primary Voltage:";
			cin >> primaryVoltage;
			
			cout << "Enter Primary Turns:";
			cin >> primaryTurns;
			
			result = primaryVoltage * secondaryTurns/primaryTurns;
			
			cout << "Secondary Voltage =" << result <<"V"<< endl;
			break;
		case 3:
			cout << "Enter Secondary Voltage:";
			cin >> secondaryVoltage;
			
			cout << "Enter Primary Turns:";
			cin >> primaryTurns;
			
			cout << "Enter Secondary Turns:";
			cin >> secondaryTurns;
			
			cout <<"Primary voltage =" << result << "V" << endl;
			break;
			
			default:
				cout << "Invalid choice." << endl;
			}
			
			return 0;
			
	}

