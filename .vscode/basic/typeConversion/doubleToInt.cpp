#include<bits/stdc++.h>
using namespace std;

// 산술표현식을 평가할 때 같은 타입을 가져야 하나, 맞지 않을 경우 암시적 형변환*(Implicit type conversion)이 일어난다.
// 이때 다름과 같은 우선순위를 거쳐 형변환이 일어난다.
// 우선 순위
// long double > double > float > unsigned long long > long long > unsigned long > long > unsigned int > int(lowest)

// ** 참고) vecotr의 size()메서드는 size_t타입(부호 없는 정수형)을 반환.
// size_t는 부호 없는 정수(음수가 없는 정수)이기 때문에, 음수 결과가 언더플로우 되기에
// size()의 반환 값을 이용해 뺄셈 등의 연산을 할 때는 부호 있는 정수로 변환하거나 조건문으로 음수 결과를 방지해야함
// [Bad] cout << a.size() - 10
// [Good] cout << (int)a.size() - 10
int main() {
    double ret = 2.12345;
    int n = 2;
    // int형인 n을 double로 만들어서 연산
    int a = (int)round(ret / double(n));
    cout << a << "\n";
    return 0;
}