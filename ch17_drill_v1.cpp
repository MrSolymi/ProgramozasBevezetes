#include "std_lib_facilities.h"

void print_array10(ostream& os, int* a)
{
    for(int i = 0; i < 10; i++)
    {
        os << a[i] << endl;
    }
}

void print_array(ostream& os, int* a, int n)
{
    for(int i = 0; i < n; i++)
    {
        os << a[i] << endl;
    }
}

void print_vector(ostream& os, vector<int> a)
{
    for(int i = 0; i < a.size(); i++)
    {
        os << a[i] << endl;
    }
}

int main(){
    int* a = new int[10];
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << endl; //mind nulla
    }
    cout << endl;
    delete[] a;

    int* a2 = new int[10];
    for(int i = 0; i < 10; i++)
    {
        a2[i] = 100 + i;
    }
    print_array10(cout, a2);
    cout << endl;
    delete[] a2;

    int* a3 = new int[11];
    for (int i = 0; i < 11; i++)
    {
        a3[i] = 100 + i;
    }
    print_array10(cout, a3); //ez csak 10et ír ki nem 11et
    cout << endl;
    delete[] a3;

    int* a4 = new int[20];
    for (int i = 0; i < 20; i++)
    {
        a4[i] = 100 + i;
    }
    print_array(cout, a4, 20);
    cout << endl;
    delete[] a4;
//-----------------------------------------
    vector<int> a5;
    for (int i = 0; i < 10; i++)
    {
        a5.push_back(100 + i);
    }
    print_vector(cout, a5);
    cout << endl;

    vector<int> a6;
    for (int i = 0; i < 11; i++)
    {
        a6.push_back(100 + i);
    }
    print_vector(cout, a6);
    cout << endl;

    vector<int> a7;
    for (int i = 0; i < 20; i++)
    {
        a7.push_back(100 + i);
    }
    print_vector(cout, a7);
    cout << endl;

    return 0;
}