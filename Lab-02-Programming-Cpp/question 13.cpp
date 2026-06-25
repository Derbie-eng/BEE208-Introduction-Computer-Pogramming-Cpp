#include <iostream>
using namespace std;

int main()
{
	float resistance;
	
	cout <<"Enter Earth Resistance (ohms):",
	cin >> resistance;
	
	while(resistance <=5)
	{
		cout <<"Earth resistance is acceptable." << endl;
		cout << "Enter Resistance (ohms):";
		cin >> resistance;
	}
	cout << "Earth resistance too high. Improve earthing system." << endl;
	
	return 0;
}
