#include<bits/stdc++.h>
using namespace std;

// C++ 에서는 split()함수를 지원하지 않음
// 그래서 직접 구현하는데 아래는 기본 로직
// vector<string> split(const string& input, string delimiter) {
//     vector<string> result;
//     auto start = 0;
//     auto end = input.find(delimiter);

//     while(end != string::npos) {
//         result.push_back(input.substr(start, end-start));
//         start = end + delimiter.size();
//         end = input.find(delimiter, start);
//     }

//     result.push_back(input.substr(start));
//     return result;
// }

// 예시1) ,를 기반으로 split()하기
vector<string> split(const string& input, string delimiter) {
    vector<string> result;
    auto start = 0;
    auto end = input.find(delimiter);
    while (end != string::npos) {
        result.push_back(input.substr(start, end - start));
        start = end + delimiter.size();
        end = input.find(delimiter, start);
    }
    result.push_back(input.substr(start));
    return result;
}

int main(){
    string str = "apple,banana,orange,grape";
    vector<string> fruits = split(str, ",");

    for(const string& fruit : fruits) {
        cout << fruit << endl;
    }
}
/*
apple
banana
orange
grape
*/
