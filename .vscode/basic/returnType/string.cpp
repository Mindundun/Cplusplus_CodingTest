#include<bits/stdc++.h>
using namespace std;

int main() {
    string a = "나는야";
    // a[0]는 0번째 1바이트 출력, 한글은 한글자당 3바이트로 깨짐 
    cout << a[0] << "\n";                   // � 출력
    cout << a[0] << a[1] << a[2] << '\n';   // 나 출력
    cout << a << '\n';                      // 나는야 출력

    string b = "abc";
    cout << b[0] << "\n";                   // a 출력
    cout << b << "\n";                      // abc 출력

    string a1 = "love is";
    // += : 문자열 또는 문자를 더할 때 사용
    // push_back() : 문자 하나씩 밖에 더하지 못함
    a1 += " pain!";

    // pop_back() : 문자열 끝을 지움. O(1)의 시간복잡도를 가짐
    a1.pop_back();                                          // ! POP

    // size() : 문자열의 사이즈를 반환, O(1)의 시간복잡도를 가짐
    cout << a1 << ":" << a1.size() << "\n";                 // love is pain:12 출력

    // begin() : 문자열의 첫번째 요소를 가리키는 이터레이터를 반환 하는데,
    // 이 이터레이터를 기반으로 *를 통해 해당 위치의 값을 가져옴
    cout << char(* a1.begin()) << "\n";                     // l 출력
    
    // end() : 문자열의 마지막 요소 그 다음을 가리키는 이터레이터를 반환.
    cout << char(* (a1.end() - 1)) << "\n";                 // n 출력

    // string& insert(size_t pos, const string& str);
    // insert(위치, 문자열) : 특정위치에 문자열을 삽입. O(n)의 시간 복잡도를 가짐
    a1.insert(0, "test ");
    cout << a1 << " : " << a1.size() << "\n";               // test love is pain : 17 츨력

    // string& erase(size_t pos = 0, size_t len = npos);
    // erase(위치, 크기) : 특정위치에 크기만큼 문자열을 지움. O(n)의 시간복잡도를 가짐
    a1.erase(0, 5);
    cout << a1 << " : " << a1.size() << "\n";               // love is pain : 12 출력

    // size_t find(const string& str, size_t pos = 0);
    // find(문자열) : 특정 문자열을 찾아 위치를 반환. 
    // 만약 해당 문자열을 못찾을 경우 string::npos를 반환
    // string::npos : size_t 타입의 최대값을 의미
    // 시간복잡도는 보통 O(N)이며 최악의 경우 O(N+M)
    auto it = a1.find("love");
    if (it != string::npos){
        cout << "포함되어있다." << "\n";                        // 포함되어있다. 출력
    }
    cout << it << "\n";                                     // 0 출력
    cout << string::npos << "\n";                           // 18446744073709551615 출력

    // string substr (size_t pos = 0, size_t len = npos) const;
    // substr(위치, 크기) : 특정 위치에서 크기만큼의 문자열 추출. O(n)의 시간복잡도를 가짐
    cout << a1.substr(5,2) << "\n";                         // is 출력 



    return 0;
}