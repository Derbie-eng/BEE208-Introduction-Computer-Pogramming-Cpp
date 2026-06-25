#include <iostream>
using namespace std;

int main()
{
	int result;
	int passed = 0;
	int failed = 0;
	
	for(int i=1; i<=15;i++)
	{
		cout <<"Component " << i << " (1= pass, 0=fail):";
		cin >> result;
		
		if(result==1)
	{
		passed++;
	}
	else
	{
		failed ++;
	}
}
cout << "\nNumber of Passed Componenets: "<< passed << endl;
cout << "Number of Failed Componenets: " << failed << endl;

return 0;
}
