#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int> a {1, 2, 3, 3, 4, 100};

int main() {
    // lower_bound가 가리키는 요소 출력
    cout << *lower_bound(a.begin(), a.end(), 100) << "\n";
    return 0;
}
/*
100
*/