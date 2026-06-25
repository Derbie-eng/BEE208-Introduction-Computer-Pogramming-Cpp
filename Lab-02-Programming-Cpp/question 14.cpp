#include <iostream>
using namespace std;

int main()
{
	string code;
	int attempt= 0;
	
	while(attempt<3)
	{
		cout << "Enter Lboratory Access Code:";
		cin >> code;
		
		if(code=="BEE208")
	{
		cout << "Access granted." << endl;
		return 0;
	}
	
	attempt++;
}
cout << "Access denied. Maximum attempt reached." << endl;

return 0;
}
