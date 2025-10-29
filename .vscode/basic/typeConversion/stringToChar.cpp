#include<bits/stdc++.h>
using namespace std;

int main() {
    string s ="123456";
    
    // 각 문자를 숫자로 변환하여 저장할 벡터를 선언
    vector<int> digits;

    //문자열의 각 문자를 순회하며 숫자로 변환합니다.
    for(int i = 0; i < s.length(); i++){
        // s[i]는 문자 타입이므로 '0'을 빼서 정수 값으로 변환
        int digit = s[i] - '0';

        // 변환한 숫자를 벡터에 추가
        digits.push_back(digit);
    } 

    cout << "문자열을 개별 숫자로 변환한 결과 : \n";
    for(int i = 0; i < digits.size(); i++) {
        cout << digits[i] << " ";
    }
    return 0;
}

/*
문자열을 개별 숫자로 변환한 결과 : 
1 2 3 4 5 6
*/