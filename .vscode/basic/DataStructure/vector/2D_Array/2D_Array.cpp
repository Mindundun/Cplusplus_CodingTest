#include<bits/stdc++.h>
using namespace std;

// 벡터 안에 빈 벡터(2차원 벡터) 생성.
vector<vector<int>> v;
// 크기가 10 x 10인 0으로 초기화된 2차원 벡터 생성
vector<vector<int>> v2(10, vector<int>(10, 0));
// 벡터 10개로 이루어진 배열 생성 : 크기 고정!(배열은 크기 고정)
vector<int> v3[10];

int main() {
    for(int i = 0; i < 10; i++) {
        vector<int> temp;
        v.push_back(temp);
    }

    return 0;
}