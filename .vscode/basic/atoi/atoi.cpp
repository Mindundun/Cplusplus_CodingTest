#include<bits/stdc++.h>
using namespace std;

// atoi(s.c_str()) : C++에서 문자열 s를 정수 int로 변환하는 방법 중 하나
// atoi는 C 표준 라이브러리 함수로 const char* 타입의 C 스타일 문자열을 int로 변환

// 만약 입력값이 정수가 아닌 문자열이라면 0을 반환하고 그게 아니라면 숫자로 올바르게 변환
int main() {
    string s = "123";
    string s2 = "amumu";
    cout << atoi(s.c_str()) << "\n";
    cout << atoi(s2.c_str()) << "\n";

    
    return 0;

}
/*
123
0
*/