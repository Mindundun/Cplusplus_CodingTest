#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3};
    int ret = -1;

    // 오류 발생.
    // max함수 내 -1이 size_t로 변환되면서 매우 큰 양수 값(UNIT_MAX)이 되어 오류 발생
    // size() 기반으로 특정 정수를 뺄때는 반드시 int타입으로 변환 후 빼는게 좋음
    // cout << max(ret, (size_t)3);

    cout << max(ret, (int)a.size()) << "\n"; 
    return 0;
}
/*
3
*/