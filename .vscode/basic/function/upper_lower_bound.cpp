#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
// vector a에 3이 처음 나온 위치 lower_bound, 가장 마지막에 나오는 위치 + 1 upper_bound
int main() {
    vector<int> a {1, 2, 3, 3, 3, 4};
    cout << lower_bound(a.begin(), a.end(), 3) - a.begin() << "\n";
    cout << upper_bound(a.begin(), a.end(), 3) - a.begin() << "\n";
    return 0;
}
/*
2
5
*/