#include <iostream>
using namespace std;

int main()
{
	int choice;
	
	cout <<"Fuse Rating Menu" << endl;
	cout << "1.5 A Fuse" << endl;
	cout << "2.10 A Fuse" << endl;
	cout << "3.13 A Fuse" << endl;
	cout << "4.20 A Fuse" << endl;
	cout << "5.32 A Fuse" << endl;
	
	cout << "\nEnter your choice: ";
	cin >> choice;
	switch(choice)
	{
		case 1:
			cout << "Application: Small electronic devices." << endl;
			break;
			
		case 2:
			cout <<"Application: Lighting circuit. " << endl;
			break;
		case 3:
			cout << "Application: Domestic socket outlets. " << endl;
			break;
		case 4:
			cout << "Application: Water heaters and medium loads. " << endl;
			break;
		case 5:
			cout << "Application: Air conditioners and heavy loads. " << endl;
			break;
			
			default:
				cout << "Invalid choice. " << endl;
     	}
     	
     	return 0;
	
	}

