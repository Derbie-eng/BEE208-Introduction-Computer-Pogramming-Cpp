#include <iostream>
using namespace std;

int main()
{
	double ratedCurrent, startingCurrent;
	
	cout << "Enter the rated current (A): ";
	cin >> ratedCurrent;
	
	cout <<"Enter the starting current (A): ";
	cin >> startingCurrent;
	
	if (startingCurrent > 3* ratedCurrent)
	{
		cout << "High starting current. Use proper motor starter." << endl;
	}
	else
	{
		cout << "Starting current is acceptable. " << endl;
	}
	
	return 0;
}
