#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

double a = 1.23456789;

int main() {
    cout << a << "\n";                             // 1.23457
    cout << fixed << setprecision(3) << a << "\n"; // 1.235
    cout << fixed << setprecision(8) << a << "\n"; // 1.23456789
}