#include<bits/stdc++.h>
using namespace std;

// 오버플로란 타입의 허용범위를 넘어갈 때 발생하는 에러!
// int 타입인 경우 2,147,483,647을 넘어가면 에러 발생!

int main() {
    int a = 2147483647;
    cout << a << "\n";

    a ++;
    cout << a << "\n";
}
/*
2147483647
-2147483648
*/