#include<bits/stdc++.h>
using namespace std;

vector<int> v {1, 2, 3};

int main() {
    for(int a : v) cout << a << " ";
    cout << "\n";
    // vector의 size()는 배열의 크기를 반환하며 size_t(unsigned)의 값을 반환
    for(int i = 0; i < v.size(); i++) cout << v[i] << ' ';
    cout << "\n";

    vector<pair<int, int>> v2 = {{1, 2}, {3, 4}};
    for(pair<int, int> a : v2) cout << a.first << " ";
}
/*
1 2 3 
1 2 3 
1 3 
*/