#include<bits/stdc++.h>
using namespace std;
int a[10];
int b[10][10];

int main() {
    // 배열의 이름 기반으로 초기화
    // 1차원의 경우 a, a + 10 -> 즉, 배열의 이름 + 숫자로 가능
    fill(a, a + 10, 100);

    for(int i = 0; i < 10; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
    // 2차원 이상인 경우에는 반드시 &b[0][0] + 숫자로 초기화 해야함
    fill(&b[0][0], &b[0][0] + 10 * 10, 2);
    for(int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}