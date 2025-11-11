#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;
string a[] = {"김","이","박"};

int main() {
    for(int i = 0; i < 3; i++){
        mp.insert({a[i], i + 1});
        mp[a[i]] = i + 1;
    }

    // mp에 해당 키가 없다면 0으로 초기화 되어 할당됨(int의 경우)
    // 만약 mp에 해당 키가 없는지 확인하고 싶고
    // 초깃값으로 0으로 할당되지 않아야 되는 상황이라면
    // find를 써야함
    cout << mp["Mindundun"] << "\n";
    // 대괄호로 수정 가능
    mp["박"] = 4;
    cout << mp.size() << "\n";
    mp.erase("박");
    auto it = mp.find("박");
    if(it == mp.end()){
        cout << "못 찾겠네 꾀꼬리\n";
    }
    mp["박"] = 100;

    it = mp.find("Mindundun");
    if(it != mp.end()){
        cout << (*it).first << " : " << (*it).second << "\n";
    }
    for(auto it : mp){
        cout << (it).first << " : " << (it).second << "\n";
    }
    for(auto it = mp.begin(); it != mp.end(); it++){
        cout << (*it).first << " : " << (*it).second << "\n";
    }
    mp.clear();

    return 0;

}
/*
0
4
못 찾겠네 꾀꼬리
Mindundun : 0
Mindundun : 0
김 : 1
박 : 100
이 : 2
Mindundun : 0
김 : 1
박 : 100
이 : 2
*/