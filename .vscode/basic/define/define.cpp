#include<bits/stdc++.h>
using namespace std;

// PI라는 상수를 정의
#define PI 3.141592

// for 반복문을 loop라는 문자열로 치환
#define loop(x,n) for(int x = 0; x < n; x ++)

int main(){
    cout << PI << '\n';
    int sum = 0;
    loop(i, 10){
        sum += i;
    }
    cout << sum << '\n';
    return 0;
}