#include<bits/stdc++.h>
using namespace std;

// atoi()와 같은 기능을 하는 stoi()함수.
// atoi는 const char*타입을 반환하나 stoi는 string을 받아 int를 반환함

// 다만 문자열, string으로 입력을 받아 입력 받은 글자가 문자열인지 숫자인지 확인할때는 atoi() 사용 필요
// 에러가 발생하기에 atoi는 문자열인 경우 0 반환하기에 오류를 처리하는 것 보다 0을 받아서 처리하는게 나음. 

int main() {
    string s = "1234";
    int num = stoi(s);
    cout << num;
    return 0;
}
/*
1234
*/