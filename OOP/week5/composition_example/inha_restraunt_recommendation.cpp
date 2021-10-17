#include <iostream>
#include <string>

using namespace std;

int main()
{
    string category;
    // int recommendation = 1;

    // char Korean, Japanese, Chinese, American, French, Italian, Fastfood;
    cout << "----------CATEGORIES----------" << endl;
    cout << "Korean Japanese Chinese " << endl;
    cout << "American French Italian Fastfood" << endl
         << endl;

    // while (recommendation <= 10)
    // {
    //     cout << "Enter the category of food that you want: ";
    //     cin >> category;

    //     if ((category == "Korean") || (category == "korean"))
    //     {
    //         cout << "Sinchon Seolleongtang" << endl;
    //     }
    //     else if ((category == "Japanese") || (category == "japanese"))
    //     {
    //         cout << "Gamei" << endl;
    //     }
    //     else if ((category == "Chinese") || (category == "chinese"))
    //     {
    //         cout << "Lahyanggak" << endl;
    //     }
    //     else if ((category == "American") || (category == "american"))
    //     {
    //         cout << "Leo pub" << endl;
    //     }
    //     else if ((category == "French") || (category == "french"))
    //     {
    //         cout << "Waffle" << endl;
    //     }
    //     else if ((category == "Italian") || (category == "italian"))
    //     {
    //         cout << "Misikttang" << endl;
    //     }
    //     else if ((category == "Fastfood") || (category == "fastfood"))
    //     {
    //         cout << "Nobrand burger" << endl;
    //     }
    //     else
    //     {
    //         cout << "Wrong input!" << endl;
    //     }
    //     recommendation++;
    // }

    for (int recommendation = 1; recommendation <= 10; recommendation++)
    {
        cout << "Enter the category of food that you want: ";
        cin >> category;

        if ((category == "Korean") || (category == "korean"))
        {
            cout << "Sinchon Seolleongtang" << endl;
        }
        else if ((category == "Japanese") || (category == "japanese"))
        {
            cout << "Gamei" << endl;
        }
        else if ((category == "Chinese") || (category == "chinese"))
        {
            cout << "Lahyanggak" << endl;
        }
        else if ((category == "American") || (category == "american"))
        {
            cout << "Leo pub" << endl;
        }
        else if ((category == "French") || (category == "french"))
        {
            cout << "Waffle" << endl;
        }
        else if ((category == "Italian") || (category == "italian"))
        {
            cout << "Misikttang" << endl;
        }
        else if ((category == "Fastfood") || (category == "fastfood"))
        {
            cout << "Nobrand burger" << endl;
        }
        else
        {
            cout << "Wrong input!" << endl;
        }
    }

    return 0;
}