#include<bits/stdc++.h>
using namespace std;

char b(){
    char a = 'a';
    return a;
}

int main() {
    char a = b();
    cout << a << "\n";  // a 출력

    // char에 아무런 값을 할당하지 않으면 널문자('\0', NULL, 0)로 초기화 되는데, 이는 빈문자열이 아님
    // 널문자('\0', NULL, 0)는 문자열의 끝을 나타낼 때 사용
    char a1 = '\0';
    char b1 = 0;
    char c1 = NULL;
    string d1 = "";
    cout << "hello";    // hello 출력

    if(a1 == b1) cout << 111;   // 111 출력
    if(b1 == c1) cout << 222;   // 222 출력
    // 빈 문자열은 아니다.
    if (string(1, a1) == d1) cout << 333;
    // string(1, '\0').size() == 1
    // string("").size() == 0



    return 0;
}