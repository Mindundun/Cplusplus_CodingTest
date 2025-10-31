#include<bits/stdc++.h>
using namespace std;
int i;
string s = " Mindun";
// 변수의 메모리 주소를 담는 타입이 바로 포인터!
// 포인터는 메모리 동적할당, 데이터를 복사하지 않고 함수 매개변수로 사용, 클래스 및 구조체를 연결할 때 사용됨

// 포인터의 크기는 OS가 32bit면 4바이트, 64bit라면 8바이트로 고정되어있음.(자료형과 상관없이)
int main(){
    i = 0;
    int * a = &i;
    cout << a << "\n";
    string * b = &s;
    cout << b << "\n";

    // 역참조 연산자의 역할도 하는 *(에스터리스크)! 의 기능!
    // 1. 이항 연산자로 사용하면 곱셈 연산
    // 2. 포인터 타입의 선언
    // 3. 역참조(dereference)ㅀ 메모리를 기반으로 변수의 값에 접근 가능

    string a1 = "abcda";
    string *b1 = &a1;
    cout << b1 << "\n";
    cout << *b1 << "\n";

    return 0;
}
/*
0x555555559160
0x555555559180
0x7fffffffdab0
abcda
*/