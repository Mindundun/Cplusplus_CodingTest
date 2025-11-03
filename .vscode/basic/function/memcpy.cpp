#include<bits/stdc++.h>
using namespace std;
// memcpy()는 어떤 변수의 메모리에 있는 값들을 다른 변수의 "특정 메모리 값"으로 복사할 때 사용
// Array의 깊은 복사.
int main(void) {
    int v[3] = {1, 2, 3};
    int ret[3];
    memcpy(ret, v, sizeof(v));
    cout << ret[1] << "\n";
    ret[1] = 100;
    cout << ret[1] << "\n";
    cout << v[1] << "\n";

    cout << "------------------" << "\n";

    
    // 하지만 vector에서는 깊은 복사가 되지 않음
    // 오류 발생!
    // vector<int> v1 {1, 2, 3};
    // vector<int> ret1(3);
    // memcpy(&ret1, &v1, 3*sizeof(int));
    
    // cout << ret1[1] << "\n";
    // ret[1] = 100;
    // cout << ret1[1] << "\n";
    // cout << v1[1] << "\n";

    return 0;
}
/*
2
100
2
*/