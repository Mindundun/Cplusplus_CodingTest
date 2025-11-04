#include<bits/stdc++.h>
using namespace std;

// 가장 작은 요소를 추출하는 함수 min_element()
// 이 함수는 이터레이터를 반환하기 때문에 *를 통해 값을 끄집어 낼 수 있고,
// 이를 기반으로 해당 최솟값의 인덱스 또한 뽑아낼 수 있음

int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a = *min_element(v.begin(), v.end());
    auto b = min_element(v.begin(), v.end());
    cout << a << "\n";
    cout << (int)(b - v.begin()) << "\n";

    return 0;
}
/*
1
0
*/