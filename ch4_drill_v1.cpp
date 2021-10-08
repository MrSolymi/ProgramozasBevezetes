#include "std_lib_facilities.h"

int main()
{
    //int a;
    //int b;
    double a, b;
    while (cin >> a >> b)
    {
        //cout << a << " " << b << endl;
        if (a < b)
        {
            cout << "The smaller number is: " << a << endl;
            cout << "The lanrger number is: " << b << endl;
            if (abs(a-b) < 0.01)
                {
                    cout << "The numbers are almot equal" << endl;
                }
        } else if (a > b)
        {
            cout << "The smaller number is: " << b << endl;
            cout << "The lanrger number is: " << a << endl;
            if (abs(a-b) < 0.01)
                {
                    cout << "The numbers are almot equal" << endl;
                }
        } else if (a == b)
        {
            cout << "The numbers are equal" << endl;
        }
        
    }
}