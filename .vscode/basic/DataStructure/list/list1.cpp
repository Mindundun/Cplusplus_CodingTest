#include<bits/stdc++.h>
using namespace std;

list<int> a;

void print(list <int> a){
    for(auto it : a) cout << it << " ";
    cout << "\n";
}

int main(){
    // 1 2 3 
    // push_back(value) : 리스트의 뒤에서 부터 value를 넣음
    for(int i = 1; i <= 3; i++) a.push_back(i);

    // 3 2 1 1 2 3 
    // push_front(value) : 리스트의 앞에서부터 value를 넣음
    for(int i = 1; i <= 3; i++) a.push_front(i);

    
    auto it = a.begin(); it++;
    // 3 1000 2 1 1 2 3 
    // insert(idx, value) : 요소의 몇번째에 삽입
    a.insert(it, 1000);
    print(a);

    it = a.begin(); it++;
    // 3 2 1 1 2 3
    // erase(idx) : 리스트의 idx번째 요소를 지움
    a.erase(it);
    print(a);

    // 2 1 1 2 3
    // pop_front() : 첫번째 요소를 지움
    a.pop_front();
    // 2 1 1 2
    // pop_back() : 맨 끝 요소를 지움
    a.pop_back();
    print(a);

    // 2 : 2
    // front() : 맨 앞 요소 참조
    // back() : 맨 뒤 요소 참조
    cout << a.front() << " : " << a.back() << "\n";

    // clear() : 모든 요소 지움
    a.clear();
    return 0;
}
/*
3 1000 2 1 1 2 3 
3 2 1 1 2 3 
2 1 1 2 
2 : 2
*/