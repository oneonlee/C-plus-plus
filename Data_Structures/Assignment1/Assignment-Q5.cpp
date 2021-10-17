#include <iostream>

void f(int x)
{
    std::cout << ++x << std::endl;
}

void g(int &x)
{
    std::cout << ++x << std::endl;
}

int main()
{
    int a = 1234;
    f(a);
    std::cout << "a : " << a << std::endl;
    g(a);
    std::cout << "a : " << a << std::endl;

    return 0;
}