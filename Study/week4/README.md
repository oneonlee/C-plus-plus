## 문제1.

```cpp
int main() {
    int a = 10;
    int* p = &a;

    return 0;
}
```

위와 같은 코드가 있을 때, 포인터 변수 p를 통해 a의 값을 출력하려고 한다. 어떻게 해야 할까?

### Solution

```cpp
cout << *p << endl;
```

---

## 문제 2.

문제 1에서 주어졌던 코드에서 포인터 변수 p를 통해 a의 값을 변경하고자 한다. 어떻게 해야 할까? (변경할 값은 임의의 정수)

### Solution

```cpp
cout << "Enter the a value : ";
cin >> *p;
```

---

## 문제 3.

```cpp
int main() {
    char str[4] = "abc";
    char* p = str;

    *(p + 2) = 'd';

    cout << str << endl;

    return 0;
}
```

위의 코드의 실행 결과를 대답하고 왜 이런 결과가 나왔는지 서술하라.

### Solution

`str`의 시작인 `'a'`로부터 2만큼 떨어진 `'c'`의 자리에 `'d'`를 대입하였으므로 `abd`가 출력된다.

---

## 문제 4.

만약 `*(p + 2)`가 아닌 `*(p + 3)`의 값을 `'d'`로 변경시키면 무슨 일이 일어날까?
(함수 포인터는 지금 다루지 않을 예정!! 나중에 중간고사 끝나고 자료구조 들어갈 때 할 수도 있음!)

### Solution

`null`의 자리에 `'d'`가 들어갔으므로 `abcd`가 출력될 것이다.
