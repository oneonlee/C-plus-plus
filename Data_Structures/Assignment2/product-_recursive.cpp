#include <iostream>
using namespace std;

unsigned int product(unsigned int m, unsigned int n)
{
    if (m == 0 || n == 0)
    {
        return 0;
    }
    else
    {
        return product(m, n - 1) + m;
    }
}

int main()
{
    cout << product(5, 4);

    return 0;
}
