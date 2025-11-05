#include<bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {
    // vector의 뒤에서부터 요소를 더하는 push_back()
    for(int i = 1; i <= 10; i++) v.push_back(i);
    for(int a : v) cout << a << " ";

    cout << "\n";
    // vector의 맨 뒤의 요소를 지움
    v.pop_back();

    for(int a : v) cout << a << " ";
    
    cout << "\n";
    // erase로 한 요소만을 지운다면 erase(위치로)쓰이지만 [from, to)로 지우고 싶다면 erase[from, to)를 통해 지움
    v.erase(v.begin(), v.begin() + 3);

    for(int a : v) cout << a << " ";
    cout << "\n";

    // vector 의 메서드가 아닌 STL함수로 [from, to)에서 value를 찾음.
    // vector 내의 요소들을 찾고 싶을때 이를 통해 찾으며 O(n)의 시간복잡도를 가짐
    auto a = find(v.begin(), v.end(), 100);
    if(a == v.end()) cout << "not found" << "\n";

    // vector 내의 value로 값을 할당하고 싶다면 fill을 써서 채움. [from, to)의 구간에 value를 초기화함
    fill(v.begin(), v.end(), 10);
    for(int a : v) cout << a << " ";

    cout << "\n";
    v.clear();

    cout<< "아무것도 없을까?\n";

    for(int a : v) cout << a << " ";
    cout << "\n";

    return 0;
    
}
/*
1 2 3 4 5 6 7 8 9 10 
1 2 3 4 5 6 7 8 9 
4 5 6 7 8 9 
not found
10 10 10 10 10 10 
아무것도 없을까?
*/