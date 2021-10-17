#include "Student.h"

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// 객체 지향 프로그래밍이 등장한 이유
// 기존의 절차적 프로그래밍의 경우 큰 규모의 프로젝트를 유지보수하기 위해
// 함수를 사용해 하나의 큰 프로젝트를 여러개의 작은 함수로 나눠서 프로그래밍 하였음.
// 이를 구조적 프로그래밍이라 하며 큰 문제를 작은문제로 나눠 풀기 때문에 하향식(Top-down)방식.
// 객체 지향 프로그래밍은 이와 반대로 작은 문제를 해결 할 수 있는 객체를 만들고 이 객체를 조합해
// 큰 문제를 해결하는 방식인 상향식(Bottom-up) 방식.

int 신분{ 학생 };

int main()
{
    // 클래스란?
    // 변수와 함수등의 묶음.
    // 묶긴 묶되 구조적으로 묶어서 접근지정자도 있고, 이름 공간도 달리 쓰고~
    // 암튼 함수랑은 다르게 좀 더 구조화되어 클래스를 통해 하나의 변수를 만들어,
    // 그 변수를 통해 클래스 내에 있는 변수나 함수들을 활용할 수 있다.

    // 이런식으로 클래스 변수, 즉 객체를 만들고,
    Student 학생1 {"정연한", "남자", 24, 12171850, 12345};

    학생1.display(); // 객체 내의 함수, 즉 메서드를 호출할 수 있다.

    cout << 학생1.get_pin() << endl;
    학생1.set_pin(67890);
    cout << 학생1.get_pin() << endl;

    return 0;
}