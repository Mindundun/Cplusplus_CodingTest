#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> v;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.first > b.first;
}

// pair를 기반으로 만들어진 vector의 경우 따로 설정하지 않으면 first, second순으로 차례차례 정렬됨.
int main() {
    for(int i = 10; i >= 1; i--){
        v.push_back({i, 10 - i});
    }

    // 오름차순
    sort(v.begin(), v.end());
    for(auto it : v) cout << it.first << " : " << it.second << "\n";

    // 내림차순
    sort(v.begin(), v.end(), cmp);
    for(auto it : v) cout << it.first << " : " << it.second << "\n";


    return 0;
}
/*
1 : 9
2 : 8
3 : 7
4 : 6
5 : 5
6 : 4
7 : 3
8 : 2
9 : 1
10 : 0
10 : 0
9 : 1
8 : 2
7 : 3
6 : 4
5 : 5
4 : 6
3 : 7
2 : 8
1 : 9
*/