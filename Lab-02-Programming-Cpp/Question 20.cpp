#include <iostream>
using namespace std;

int main()
{
    float power, total = 0;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Enter Power Reading " << i << ": ";
        cin >> power;

        if(power < 0)
        {
            cout << "Invalid reading skipped." << endl;
            continue;
        }

        total += power;
    }

    cout << "Total Valid Power Readings = " << total << endl;

    return 0;
}
