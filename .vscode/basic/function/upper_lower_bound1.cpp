#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() {
    vector<int> a {1, 2, 3, 3, 3, 4};
    // a 안에 3이 최초로 나온 주소
    cout << &*lower_bound(a.begin(), a.end(), 3) << "\n";
    // a의 시작주소
    cout << &*a.begin() << "\n";
    // a의 시작 + 1 주소
    cout << &*(a.begin() + 1) << "\n";
    return 0;
}
/*
0x55555556beb8
0x55555556beb0
0x55555556beb4
*/