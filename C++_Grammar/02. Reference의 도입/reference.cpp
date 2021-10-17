#include <iostream>

using namespace std;

int main()
{
    long i = 20, j = 10;
    long &iref = i;

    iref = 42;
    cout << "i : " << i << endl;         // 42
    cout << "iref : " << iref << "\n\n"; // 42

    iref = j;
    cout << "i : " << i << endl;         // 10
    cout << "iref : " << iref << "\n\n"; // 10

    iref = (long)&j;
    cout << "i : " << i << endl;         // address of j
    cout << "iref : " << iref << "\n\n"; // address of j

    iref = NULL;
    cout << "i : " << i << endl;         // 0
    cout << "iref : " << iref << "\n\n"; // 0

    return 0;
}