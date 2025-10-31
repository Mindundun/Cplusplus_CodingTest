#include<bits/stdc++.h>
using namespace std;
int a[3] = {1, 2, 3};
// 배열의 이름을 주소 값으로 사용 : array to pointer decay
// => 배열이 포인터로 부식(decay)되는 현상
int main() {
    int *c = a;
    cout << c << "\n";
    cout << &a[0] << "\n";
    cout << c + 1 << "\n";
    cout << &a[1] << "\n";

    return 0;
}
/*
0x555555558010
0x555555558010
0x555555558014
0x555555558014
*/