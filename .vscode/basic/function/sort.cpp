#include<bits/stdc++.h>
using namespace std;

vector<int> a; 
int b[5];

// sort()는 배열 등 컨테이너들의 요소를 정렬하는 함수.
// array나 vector를 정렬할 때 쓰이며 O(nlogn)의 시간복잡도를 가지는 함수.
// sort()에 들어가는 매개변수로는 3가지가 있으며, 2개는 필수로 넣어야한다.
// sort(first, last, *커스텀비교함수) :: [first,last) 라는 범위를 갖음
int main(){
    for(int i = 5; i >= 1; i --) b[i-1] = i;
    for(int i = 5; i >= 1; i --) a.push_back(i);

    // 오름차순(3번째 인자를 넣지 않은 경우도 오름차순!)
    sort(b, b+5);
    sort(a.begin(), a.end());
    for(int i : b) cout << i << ' ';
    cout << "\n";
    for(int i : a) cout << i <<" ";
    cout << "\n";

    sort(b, b+5, less<int>());
    sort(a.begin(), a.end(), less<int>());
    for(int i : b) cout << i << " ";
    cout << "\n";
    for(int i : a) cout << i << " ";
    cout << "\n";

    // 내림차순
    sort(b, b + 5, greater<int>());
    sort(a.begin(), a.end(), greater<int>());
    for(int i : b) cout << i << " ";
    cout << "\n";
    for(int i : a) cout << i << " ";
    cout << "\n";

    return 0;
}
/*
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
5 4 3 2 1 
5 4 3 2 1 
*/