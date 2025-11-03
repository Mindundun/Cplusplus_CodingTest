#include<bits/stdc++.h>
using namespace std;
int a[10];
int b[10][10];

// 배열을 초기화할 때 사용.
// fill은 모든 값으로 초기화 할 수 있음(0, 1, 100 등 모든 숫자로 초기화가 가능)

// fill()은 O(n)의 시간복잡도를 가지며 fill(시작값 - first, 끝 값 - list, 초기화하는 값 - val)로 배열에 들어가는 값을 초기화
// 모든 값을 기반으로 초기화가 가능하며 [first, last)까지 val로 초기화함
// fill()로 배열의 모든 값이 아닌 일부값을 초기화하는 경우도 있지만 보통은 전체를 초기화하는게 좋음

// void fill (ForwardIterator first, ForwardIterator last, const T& val);
int main(){
    fill(&a[0], &a[10], 100);
    
    for(int i = 0; i < 10; i ++){
        cout << a[i] << " ";
    }
    cout << '\n';
    fill(&b[0][0], &b[9][10], 2);
    for(int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j ++){
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}

/*
100 100 100 100 100 100 100 100 100 100 
2 2 2 2 2 2 2 2 2 2 
2 2 2 2 2 2 2 2 2 2 
2 2 2 2 2 2 2 2 2 2 
2 2 2 2 2 2 2 2 2 2 
2 2 2 2 2 2 2 2 2 2 
2 2 2 2 2 2 2 2 2 2 
2 2 2 2 2 2 2 2 2 2 
2 2 2 2 2 2 2 2 2 2 
2 2 2 2 2 2 2 2 2 2 
2 2 2 2 2 2 2 2 2 2 
*/