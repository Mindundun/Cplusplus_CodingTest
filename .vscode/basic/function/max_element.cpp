#include<bits/stdc++.h>
using namespace std;

// 배열 중 가장 큰 요소를 추출하는 함수.

// 이 함수는 이터체이터를 반환하기 때문에 *를 통해 값을 끄집어 낼 수 있고,
// 이를 기반으로 해당 최댓값의 인덱스 또한 뽑아낼 수 있음.

int main() {
    vector <int> v {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int a = *max_element(v.begin(), v.end());
    auto b = max_element(v.begin(), v.end());

    cout << a << '\n';
    cout << (int)(b - v.begin()) << "\n";
    
    return 0;
}

/*
10
9
*/