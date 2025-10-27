#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

double a = 1.23456789;

int main() {

    cout << a << "\n";                             // 1.23457 : cout은 기본적으로 실수를 출력하면 일부분만 출력
    cout << fixed << setprecision(3) << a << "\n"; // 1.235
    cout << fixed << setprecision(8) << a << "\n"; // 1.23456789
}