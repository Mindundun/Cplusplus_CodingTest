#include<bits/stdc++.h>
using namespace std;

int a = 1;
auto b = 1;

// auto는 타입추론을 하여 결정되는 타입
int main() {
    cout << b << "\n";

    // auto 타입은 주로 복잡하고 긴 타입의 변수명을 대신할 때 쓰임.
    // 아래 코드처럼 pair<int, int> it가 아닌 auto it로 조금 더 짧게 선언 가능
    vector<pair<int,int>> v;

    for(int i = 1; i<= 5; i++){
        v.push_back({i, i});
    }

    for(auto it : v){
        cout << it.first << " : " << it.second <<"\n";
    }

    for(pair<int,int> it : v){
        cout << it.first << " : " << it.second << "\n";
    }
    return 0;
}
/*
1
1 : 1
2 : 2
3 : 3
4 : 4
5 : 5
1 : 1
2 : 2
3 : 3
4 : 4
5 : 5
*/