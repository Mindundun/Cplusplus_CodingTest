#include<bits/stdc++.h>
using namespace std;

const int max_n = 1004;
int a[max_n];
int a2[max_n][max_n];

// memset()은 바이트 단위로 초기화를 하며 0, -1, char형의 하나의 문자(a, b, c, 등..)으로 초기화를 할 때만 사용
// fill보다 간편하게 초기화 가능하기에 0, -1(숫자)이란 값으로 초기화할 때는 memset을 쓰는 것이 좋음.
int main(){
    memset(a, -1, sizeof(a));
    memset(a2, 0, sizeof(a2));
    for(int i = 0; i < 10; i++) cout << a[i] << " ";
    return 0;
}
/*
-1 -1 -1 -1 -1 -1 -1 -1 -1 -1
*/