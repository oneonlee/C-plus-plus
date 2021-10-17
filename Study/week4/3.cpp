#include <iostream>
using namespace std;

int main() {
    char str[4] = "abc";
    char* p = str;

    *(p + 2) = 'd';

    cout << str << endl;

    return 0;
}