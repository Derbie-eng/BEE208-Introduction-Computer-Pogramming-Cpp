#include <iostream>
using namespace std;

int main()
{
	int choice;
	double values, result;
	
	cout << "Measurement Unit Conversation Menu" << endl;
	cout << "1.Convert volts to millivolts" << endl;
	cout << "2.Convert amperes to milliamperes" << endl;
	cout << "3.Convert killowatts to watts" << endl;
	cout << "4. Convert ohms to kilo-ohms" << endl;
	
	cout << "\nEnter your choice:";
	cin >> choice;
	
	cout << "Enter the values:";
	cin >> values;
	
	switch(choice)
	{
		case 1:
			result = values * 1000;
			cout << values << "V =" << result << "mV" << endl;
			break;
			
		case 2:
			result = values * 1000;
			cout << values << "mA" << endl;
			break;
			
		case 3:
			result = values * 1000;
			cout << "kW =" << result << "k" << endl;
			break;
		case 4:
			result =values / 1000;
			cout << values << "Ohms = " << result << " kOhms" << endl;
			break;
			
			default:
				cout << "Invalid choice." << endl;
	}
	      return 0;
	}

