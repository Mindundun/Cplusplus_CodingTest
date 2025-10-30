#include<bits/stdc++.h>
using namespace std;

void printConstRef(const int& x){
    // x = 100; // 에러 발생, 여기서 x는 매개변수로 받아온 const int x를 참조하기에..
    cout << x << "\n";
}

int main() {
    int x = 10;
    printConstRef(x);


    vector<int> vec = {10, 20, 30, 40, 50};
    for (const int& value : vec){
        cout << value << " ";
        // value = 100; // 에러 발생, value는 const 참조
    }

    return 0;
}
/*
10
10 20 30 40 50
*/