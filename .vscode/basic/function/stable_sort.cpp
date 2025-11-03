#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.first < b.first;
}

// 들어온 순서대로 정렬하고 싶은 경우 stable_sort() 사용
// sort()와 stable_sort()의 차이
// sort 함수는 불안정 정렬 알고리즘을 사용 -> 같은 값을 가진 요소들의 들어온 순서를 정렬 후 보존하지 않음
// stable_sort 함수는 안정 정렬 알고리즘을 사용 -> 같은 값을 가진 요소들의 들어온 순서를 정렬후에도 보존함.
int main(){
    // pair의 첫 번째 요소는 정렬할 값, 두 번째 요소는 원래 인덱스를 나타냄
    vector<pair<int, int>> pairs = {{5, 1}, {2, 2}, {5, 3}, {3, 4}, {2, 5}};

    cout << "Original: ";
    for (const auto& p : pairs){
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << "\n";
    sort(pairs.begin(), pairs.end(), cmp);
    cout << "Sorted with sort: ";
    for (const auto& p : pairs) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << "\n";

    // 원본 데이터로 초기화
    pairs = {{5, 1}, {2, 2}, {5, 3}, {3, 4}, {2, 5}};

    // stable_sort 사용
    stable_sort(pairs.begin(), pairs.end(), cmp);
    cout << "Sorted with stable_sort : ";
    for(const auto& p : pairs){
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << "\n";
    return 0;

}
/*
Original: (5, 1) (2, 2) (5, 3) (3, 4) (2, 5) 
Sorted with sort: (2, 2) (2, 5) (3, 4) (5, 1) (5, 3) 
Sorted with stable_sort : (2, 2) (2, 5) (3, 4) (5, 1) (5, 3) 
*/