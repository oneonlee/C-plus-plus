#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int j;
    int k;
    for (int i = 1; i <= n; i++)
    {
        j = n - i;
        k = i;
        while (j > 0)
        {
            cout << " ";
            j--;
        }
        while (k > 1)
        {
            cout << "*";
            k--;
        }
        cout << "*" << endl;
    }

    return 0;
}