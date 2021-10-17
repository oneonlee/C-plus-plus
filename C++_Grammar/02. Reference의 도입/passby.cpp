// https://littlepenguin.tistory.com/9

#include <iostream>

using namespace std;

// pbVAL : pass by value
// pbREF : pass by reference
// pbPTR : pass by pointer

void foo(int pbVAL, int &pbREF, int *pbPTR)
{
    pbVAL = 15;
    pbREF = 16;
    *pbPTR = 17;
}

void cnstFoo(const int pbVAL, const int &pbREF, const int *pbPTR, const int *ptr)
{
    // pbVAL = 15;  // error: read-only variable is not assignable
    // pbREF = 16;  // error: read-only variable is not assignable
    // \*pbPTR = 17; // error: read-only variable is not assignable
    ptr = pbPTR;
    cout << *ptr << endl; // 7
}

int main()
{
    int pbVAL = 5, pbREF = 6, pbPTR = 7;
    foo(pbVAL, pbREF, &pbPTR);
    cout << pbVAL << "\t" << pbREF << "\t " << pbPTR << endl; // 5 16 17

    pbVAL = 5, pbREF = 6, pbPTR = 7;
    int ptr = 8;
    cnstFoo(pbVAL, pbREF, &pbPTR, &ptr);
    cout << ptr << endl; // 8

    return 0;
}