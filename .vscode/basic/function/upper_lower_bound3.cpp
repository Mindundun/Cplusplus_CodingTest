#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// 이 방법은 잘 쓰지 않음
int main(){
    vector<int> a {1, 2, 3, 3, 3, 4};
    // 최초로 3이 나오는 위치의 주소 - 최초 주소 : 3이 나오는 순번
    cout << &*lower_bound(a.begin(), a.end(), 3) - &*a.begin() << "\n";
    vector<int> b{0, 0, 0, 0};
    cout << &*(b.begin() + 3) - &*b.begin() << "\n";
    return 0;
}
/*
2
3
*/