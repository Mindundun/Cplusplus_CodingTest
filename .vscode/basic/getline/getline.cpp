#include<bits/stdc++.h>
using namespace std;

int T;
string s;
int main() {
    // getline()은 기본적으로 개행문자 ('\n')를 줄의 끝으로 인식하고 그 개행 문자 직전까지 입력받음
    // 만약 다른 종결문자를 사용하고 싶으면 세번째 인자로 전달하면 된다.
    // getline(cin, s);
    // cout << s << '\n';

    // getline(cin, s, '_');
    // cout << s << '\n';

    // getline으로 입력받을 때 주의할 점 **
    // cin으로 T개의 getline을 받을지 설정하고 T개 만큼 getline의 입력이 들어오는 상황이 있는데,
    // 그럴때는 특정 문자열을 기반으로 버퍼플래시를 하고 받아야한다.
    // 이 이유는 cin으로 입력을 받을 때 개행문자 직전까지 입력을 받게되고 이 때문에 중간에 위치한 버퍼에 \n이 남아있게 되는것
    // 이 버퍼의 개행문자를 없애주기 위해 getline(cin, bufferflush)를 해주어야 한다.
    
    cin >> T;                   // 이때 개행문자(\n)가 버퍼에 남음
    string bufferflush;         // 위에 남아있는 개행문자를 비우기 위한 변수(임의의 이름으로 변경해도 된다.)
    getline(cin, bufferflush);  // T입력시 남은 개행문자를 비움
    for (int i = 0; i < T; i++){
        getline(cin, s);
        cout << s <<"\n";
    }

    return 0;
}
/*
민둔이 짱짱 화이팅!             // 입력
민둔이 짱짱 화이팅!             // 출력
민둔이 대장님_안녕하십니까?       // 입력
민둔이 대장님                   // 출력
*/