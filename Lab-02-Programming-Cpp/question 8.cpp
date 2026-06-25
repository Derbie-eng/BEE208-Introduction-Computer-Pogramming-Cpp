#include <iostream>
using namespace std;

int main(){
	float line1, line2, line3, average ;
	
	for(int i = 1; i <= 6; i++){
		cout << "Set" << i << ":" << endl;
		cout << "Enter Line 1 current(A): ";
		cin >> line1
		
		cout << "Enter Line 2" Current(A):";
		cin >> line2;
		
		cout << "Enter Line 3 current (A): ";
		cin >> line3;
		
		average = (line 1 + line 2 +line 3)/ 3;
		cout << "Average current for set" << i << "=" << average << "A" << endl;
		cout << endl;
	}
	
	return 0;
}
