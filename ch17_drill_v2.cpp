#include "std_lib_facilities.h"

void print_array(ostream& os, int* a, int n)
{
    for(int i = 0; i < n; i++)
    {
        os << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int* p1 = new int(7);

    cout << "p1 value: " << p1 << endl << "p1 pints to: " << *p1 << endl;

    int* p2 = new int[7];
    int x = 1;
    for(int i = 0; i < 7; i++){
		p2[i] = x;
        x *= 2;
	}
    cout << "p2 value: " << p2 << endl << "p2 pints to: ";

    print_array(cout, p2, 7);

    int* p3 = p2;
    
    p2 = p1;

    p2 = p3;

    cout << "p1 value: " << p1 << endl << "p1 pints to: " << *p1 << endl;
    cout << "p2 value: " << p2 << endl << "p2 pints to: ";
    print_array(cout, p2, 7);

    delete p1;
    delete[] p3;

    p1 = new int[10];
    int x = 1;
    for(int i = 0; i < 7; i++){
		p2[i] = x;
        x *= 2;
	}
    print_array(cout,p1,10);

    p2 = new int[10];
    for (int i = 0; i < 10; i++)
    {
        p2[i] = p1[i];
    }

    delete[] p1;
    delete[] p2;

    vector<int> v(10);

    int x = 1;
    for(int i = 0; i < 7; i++){
		v[i] = x;
        x *= 2;
	}

    vector<int> v2(10);

    for(int i = 0; i < v2.size(); i++){
		v2[i] =v [i];
	}

    return 0;
}