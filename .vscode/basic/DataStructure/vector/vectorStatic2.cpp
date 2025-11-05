#include<bits/stdc++.h>
using namespace std;

//vector 선언과 동시에 데이터 삽입
vector<int> v {10, 20, 30, 40, 50};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    for(int i : v) cout << i << " ";

    return 0;
}