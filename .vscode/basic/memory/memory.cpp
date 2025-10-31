#include<bits/stdc++.h>
using namespace std;

int i;
int main() {
    // &연산자를 통해 변수의 메모리 주소를 얻을 수 있음.
    cout << &i << "\n";

    i = 0;
    // & 연산자를 통해 메모리의 주소를 가져올 수 있음
    // 값을 대입하더라도 메모리의 주소는 변화하지 않음
    cout << &i << "\n";
}
/*
0x555555558154
*/