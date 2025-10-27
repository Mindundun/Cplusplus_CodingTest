#include<bits/stdc++.h>
using namespace std;
int ret = 1;

void a() {  // void 함수 : 리턴 값이 없음
    ret = 2;
    cout << ret << "\n";    // 2 출력
    return;
}

int main() {
    a();    
    return 0;
}