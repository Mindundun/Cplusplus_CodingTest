#include<bits/stdc++.h>
using namespace std;

// void reverse (BidrectionIterator first, BidrectionIterator last);
int main() {
    string a = "It's hard to have a sore leg";
    reverse(a.begin(), a.end());
    cout << a << "\n";              // gel eros a evah ot drah s'tI

    reverse(a.begin(), a.end());    // It's hard to have a sore leg
    cout << a << "\n";

    reverse(a.begin() + 3, a.end());// It'gel eros a evah ot drah s
    cout << a << "\n";
    
    return 0;
}