#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int> a { 1, 2, 3, 3, 3, 3, 4, 100};

int main() {
    // upper_bound(a.begin(), a.end(), 3) : 3이 나오는 가장 마지막 순번 + 1 : 6
    // lower_bound(a.begin(), a.end(), 3) : 3이 나오는 가장 최초 순번 : 2
    // 6 - 2
    cout << upper_bound(a.begin(), a.end(), 3) - lower_bound(a.begin(), a.end(), 3) << "\n";
    return 0;
}
/*
4
*/