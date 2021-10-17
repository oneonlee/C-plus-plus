#include <iostream>
#include <string>
using namespace std;

int main()
{

    string category;

    string Korean = "Korean";
    string Japanese = "Japanese";

    int recommendation = 1;

    while (recommendation <= 10)
    {
        cout << "Enter the category of food that you want: ";
        cin >> category;
        if (category == Korean)
        {
            cout << "Sinchon Seolleongtang" << endl;
        }
        else if (category == Japanese)
        {
            cout << "Gamei" << endl;
        }
        else if (category == "Chinese")
        {
            cout << "Lahyanggak" << endl;
        }
        else if (category == "American")
        {
            cout << "Leo pub" << endl;
        }
        else if (category == "French")
        {
            cout << "Waffle" << endl;
        }
        else if (category == "Italian")
        {
            cout << "Misikttang" << endl;
        }
        else if (category == "Fastfood")
        {
            cout << "Nobrand burger" << endl;
        }
        else
        {
            cout << "Wrong input!" << endl;
        }
        recommendation++;
    }
}