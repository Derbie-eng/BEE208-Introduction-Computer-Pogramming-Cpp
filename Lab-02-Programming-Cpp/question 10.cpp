#include <iostream>
using namespace std;

int main()
{
	float power, time, energy;
	float totalEnergy = 0;
	
	for(int i=1; i<=8; i++)
	{
		cout << "\nAppliance " << i << endl;
		
		cout << "Enter Power Rating(W):";
		cin >> time;
		
		energy =power * time;
		totalEnergy += energy;
		
		cout << "Energy Consumed =" << energy <<"Wh" << endl;
	}
			cout << "\nTotal Energy Consumed by All Appliance ="
			<< totalEnergy << "Wh" << endl;
			
			return 0;
			
	}
	
