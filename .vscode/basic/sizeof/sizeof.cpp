#include<bits/stdc++.h>
using namespace std;

// sizeod는 C++에서 컴파일 타입 연산자로 피연산자의 메모리 크기(바이트 단위)를 반환
// 반환 값은 size_t형으로 이는 부호 없는 정수형 타입.
// ex. int arr[10]; -> sizeof(arr) => 10 * sizeod(int) ==> 40
int main() {
    int a = 10;
    int arr[10];

    cout << "int 의 크기 : " << sizeof(int) << " 바이트" << "\n";
    cout << "a의 크기 : " << sizeof(a) << " 바이트" << "\n";
    cout << "arr 배열의 전체 크기 : " << sizeof(arr) << " 바이트" << "\n";
    cout << "arr 배열의 요소 개수 : " << sizeof(arr) / sizeof(arr[0]) << "\n";
}
/*
int 의 크기 : 4 바이트
a의 크기 : 4 바이트
arr 배열의 전체 크기 : 40 바이트
arr 배열의 요소 개수 : 10
*/