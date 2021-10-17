#pragma once
#include <iostream>

using std::cout;
using std::endl;
using std::string;

enum 권한 { 학생, 학부모 };
extern int 신분;

// 클래스: 객체를 만드는 "틀"
class Student
{
public: // 접근지정자
    // 생성자(클래스의 이름을 함수의 이름으로 하는 함수)
    // 반환형이 없다.(void가 아니라 아예 반환을 하지 않음)
    // 생성자의 역할: 매개변수에 들어온 값들로 객체의 멤버변수(필드) 초기화
    // 생성자에서 멤버 이니셜라이저를 통해 값들을 초기화
    Student(string name, string gender, int age, int stuNum, int pin)
        : name{name}, gender{gender}, age{age}, stuNum{stuNum}, pin{pin}
    {
        // 함수의 몸통에는 아무것도 없음.
        // 그런데 이 생성자는 분명 객체를 초기화 하고 있음.
        // 멤버 이니셜라이저를 통해 필드값들을 초기화 하고있다.
    }

    // 멤버함수 또는 메서드
    void display()
    {
        cout << name << endl
             << gender << endl
             << age << endl
             << stuNum << endl
             << pin << endl;
    }

    int get_pin()
    {
        if (신분 == 학생)
            return pin;
        else
            return 0;
    }

    void set_pin(int p)
    {
        if (p < 10'000)
			cout << "비밀번호가 너무 짧습니다" << endl;
		else
			pin = p;
    }

private:
    // 멤버 변수 또는 필드
    string name;
    string gender;
    int age;
    int stuNum;
    int pin;
};
