#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter two inputs:\t";
    cin >> a >> b;

    c = a + b;
    cout << "c = a + b\t:\t" << c << " = " << a << " + " << b << endl;

    c = a - b;
    cout << "c = a - b\t:\t" << c << " = " << a << " - " << b << endl;

    c = a * b;
    cout << "c = a X b\t:\t" << c << " = " << a << " X " << b << endl;

    return 0;
}