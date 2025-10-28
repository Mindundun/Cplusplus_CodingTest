#include<bits/stdc++.h>
using namespace std;


// 예시2) -> 를 기반으로 split()하기
vector<string> split(const string& input, string delimiter) {
    vector<string> result;
    auto start = 0;
    auto end = input.find(delimiter);

    while ( end != string::npos) {
        result.push_back(input.substr(start, end - start));
        start = end + delimiter.size();
        end = input.find(delimiter, start);
    }

    result.push_back(input.substr(start));
    return result;
}

int main() {
    string str = "one->two->three->four";
    vector<string> numbers = split(str, "->");
    for (const string& number : numbers) {
        cout << number << endl;
    }
    return 0;
}