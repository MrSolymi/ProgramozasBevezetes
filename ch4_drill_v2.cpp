#include "std_lib_facilities.h"

int main()
{
    vector<string> acceptedUnits = {"cm", "m", "in", "ft"};
    vector<double> doubleMeterValues = {};
    double 
        a,
        min,
        max;
    string unit;
    int x = 0;
    double sum = 0;
    while (cin >> a >> unit)
    {
        bool ok = false;
        for (string units:acceptedUnits)
        {
            if (unit == units)
            {
                ok = true;
            }
            
        }
        if (!ok)
        {
            cout << "Illegal unit" << endl;
            continue;
        }
        if (x == 0)
        {
            min = a;
            max = a;
        }
        if (a > max)
        {
            cout << a << " largest value so far" << endl;
        }else if (a < min)
        {
            cout << a << " smallest value so far" << endl;
        }else
        {
            cout << a << endl;
        }
        x++;
        
        if (unit == "m")
        {
            sum += a;
            doubleMeterValues.push_back(a);

        } else if (unit == "cm")
        {
            sum += (double)a/100.0;
            doubleMeterValues.push_back((double)a/100.0);
        } else if (unit == "ft")
        {
            double cm = a * 12 * 2.54;
            sum += (double)cm/100.0;
            doubleMeterValues.push_back((double)cm/100.0);
        } else if (unit == "in")
        {
            double cm = a * 2.54;
            sum += (double)cm/100.0;
            doubleMeterValues.push_back((double)cm/100.0);
        }
        cout << "Number of values: " << x << endl;
        cout << "Sum of entered values (in meter): " << sum << endl;
        
        sort(doubleMeterValues.begin(), doubleMeterValues.end());

        cout << "Already entered values in meter:" << endl;
        for (int i = 0; i < doubleMeterValues.size() ; i++)
        {
            cout << "\t" << doubleMeterValues[i] << " m" << endl;
        }

        cout << endl;
    }
}