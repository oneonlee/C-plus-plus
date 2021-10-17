#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;

    cout << *p << endl;

    cout << "Enter the a value : ";
    cin >> *p;

    cout << "*p : " << *p << endl;
    cout << "a : " << a << endl;

    return 0;
}