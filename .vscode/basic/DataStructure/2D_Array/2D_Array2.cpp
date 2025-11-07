#include<bits/stdc++.h>
using namespace std;

const int mxy = 3;
const int mxx = 4;

int a[mxy][mxx];

// 2차원 배열 탐색

int main() {
    for(int i = 0; i < mxy; i++){
        for(int j = 0; j < mxx; j++){
            a[i][j] = (i + j);
        }
    }
    // 첫번째 차원 -> 두번째 차원 순으로 탐색하는 것이 성능에 좋음
    // C++에서 캐시를 첫 차원을 기준으로 하기 때문에 캐시 관련 효율성
    // good 
    for(int i = 0; i < mxx; i++){
        for(int j = 0; j < mxy; j++){
            cout << a[j][i] << ' ';
        }
        cout << "\n";
    }
    
    cout << "\n";

    // bad
    for(int i = 0; i < mxx; i++){
        for(int j = 0; j < mxy; j++){
            cout << a[i][j] << ' ';
        }
        cout << "\n";
    }
    return 0;
}