#include<bits/stdc++.h>
using namespace std;

// memcpy()와 똑같은 동작을 수행하는 함수. vector와 Array에 모두 사용 가능
// copy (InputIterator first, InputIterator last, OutputIterator result) 
int main(void) {
    vector<int> v {1, 2, 3};
    vector<int> ret(3);
    copy(v.begin(), v.end(), ret.begin());
    cout << ret[1] << "\n";
    ret[1] = 100;
    cout << ret[1] << "\n";
    cout << v[1] << "\n";

    cout << "--------------" << "\n";
    int v1[] = {1, 2, 3};
    int ret1[3];
    copy(v1, v1+3 , ret1);
    cout << ret1[1] << "\n";
    ret1[1]  = 100;
    cout << ret1[1] << "\n";
    cout << v1[1] << "\n";
    return 0;
}
/*
2
100
2
--------------
2
100
2
*/