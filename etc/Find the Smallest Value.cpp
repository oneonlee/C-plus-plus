#include <iostream>
using namespace std;

int main()
{
    int total, number, counter, smallest = 0;

    cout << "Enter the total number of integers: ";
    cin >> total;

    counter++;
    cout << "Enter the number: ";
    cin >> number;
    smallest = number;

    while (counter < total)
    {
        counter++;
        cout << "Enter the number: ";
        cin >> number;

        if (number < smallest)
        {
            smallest = number;
        }
    }
}