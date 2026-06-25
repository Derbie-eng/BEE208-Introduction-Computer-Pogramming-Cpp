#include <iostream>
using namespace std;

int main()
{
    float reading, sum = 0, average;
    int count = 0;

    for(int i = 1; i <= 12; i++)
    {
        cout << "Enter Sensor Reading " << i << ": ";
        cin >> reading;

        if(reading == 999)
        {
            continue;
        }

        sum += reading;
        count++;
    }

    if(count > 0)
    {
        average = sum / count;
        cout << "Average of Valid Readings = " << average << endl;
    }
    else
    {
        cout << "No valid readings entered." << endl;
    }

    return 0;
}
