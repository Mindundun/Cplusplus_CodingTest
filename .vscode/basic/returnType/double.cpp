#include<bits/stdc++.h>
using namespace std;

double a(){             // 리턴 값이 double인 함수 
    return 1.2344;
}

int main() {
    double ret = a();   // 함수에 값을 받아 double형의 ret 변수에 담음
    cout << ret << "\n";// 1.2344 출력
    return 0;
}