#include<bits/stdc++.h>
using namespace std;
pair<int, int> pi;
tuple<int, int, int> tl;
int a, b, c;
int a1, b1, c1;
// C++ 에서 제공하는 utility 라이브러리 헤더의 템플릿 클래스.
// pair는 first와 second 라는 멤버 변수를 가지는 클래스이며, 두가지 값을 담아야 할 때 사용.
// tuple은 세가지 이상의 값을 담을 때 쓰는 클래스.
int main() {
    
    pi = {1, 2};
    tl = make_tuple(1, 2, 3);
    // tie로 데이터를 추출
    tie(a, b) = pi;
    cout << a << " : " << b << "\n";

    tie(a, b, c) = tl;
    cout << a << " : " << b << " : " << c << "\n";

    // 각각 추출하는 방법
    a1 = pi.first;
    b1 = pi.second;
    cout << a1 << " : " << b1 << "\n";

    a1 = get<0>(tl);
    b1 = get<1>(tl);
    c1 = get<2>(tl);
    cout << a1 << " : " << b1 << " : " << c1 << "\n";
    return 0;

}
/*
1 : 2
1 : 2 : 3
1 : 2
1 : 2 : 3
*/