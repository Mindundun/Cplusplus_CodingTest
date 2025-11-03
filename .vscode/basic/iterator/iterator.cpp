#include<bits/stdc++.h>
using namespace std;

vector<int> v;

// 이터에리터는 컨테이너에 저장되어 있는 요소의 주소를 가리키는 개체를 말하며 포인터를 일반화한 것을 말함.
// vector, map 등 각각 다르게 구현된 컨테이너들을 일반화된 이터레이터를 통해 쉽게 순회할 수 있음.

// 다만 주소값을 바로 반환하지는 못하며 &*를 통해 한단계 더 거쳐서 가리키는 해당 요소의 주소값을 반환할 수 있음.

int main(){
    for(int i = 1; i <= 5; i ++) v.push_back(i);
    for(int i = 0; i < 5; i++){
        cout << i << "번째 요소 : " << *(v.begin() + i) << " " <<"\n";

        cout << &*(v.begin() + i) << "\n";
    }
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << ' ';
    }
    auto it = v.begin();
    advance(it, 3); // 해당 iterator를 cnt까지 증가시킴
    cout << '\n';
    cout << *it << "\n";

    // cout << v.begin() << '\n'; //에러  
}
/*
0번째 요소 : 1
0x55555556bef0
1번째 요소 : 2
0x55555556bef4
2번째 요소 : 3
0x55555556bef8
3번째 요소 : 4
0x55555556befc
4번째 요소 : 5
0x55555556bf00
1 2 3 4 5 1 2 3 4 5 
4
*/