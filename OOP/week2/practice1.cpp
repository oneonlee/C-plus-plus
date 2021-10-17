#include <iostream>
using namespace std;

class Calculator
{
public:
    double add(double a, double b);
    double sub(double a, double b);
    double mul(double a, double b);
    double div(double a, double b);
};

double Calculator::add(double a, double b)
{
    return a + b;
}
double Calculator::sub(double a, double b)
{
    return a - b;
}
double Calculator::mul(double a, double b)
{
    return a * b;
}
double Calculator::div(double a, double b)
{
    return a / b;
}

int main()
{
    double num1;
    double num2;
    char op;

    Calculator calc;

    cout << "Please enter a formula :" << endl;
    cin >> num1 >> op >> num2;

    switch (op)
    {
    case '+':
        cout << calc.add(num1, num2) << endl;
        /* code */
        break;

    case '-':
        cout << calc.sub(num1, num2) << endl;
        /* code */
        break;

    case '*':
    case 'x':
    case 'X':
        cout << calc.mul(num1, num2) << endl;
        /* code */
        break;

    case '/':
        cout << calc.div(num1, num2) << endl;
        /* code */
        break;

    default:
        cout << "Please use formula to calculate." << endl;
        break;
    }

    return 0;
}