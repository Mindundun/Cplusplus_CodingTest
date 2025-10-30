#include<bits/stdc++.h>
using namespace std;

// int로 선언한 변수끼리 연산 시 실수가 나온다면 소수점 아래에 있는 수는 모두 버림된다.
int main(){
    // 입출력 최적화 코드, 입출력 스트림 동기화(sync) 끄는 명령어
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    int a = 3;
    int b = 2;

    cout << a / b << "\n";
    
    double c = 3;
    double d = 2;
    
    cout << c / d << "\n";

    return 0;
}
/*
1
1.5
*/