#include<bits/stdc++.h>
using namespace std;
typedef long long ll;  

int a1 = 1, b1 = 2;

double a = 1.23456789; 
int b = 12; 
int c = 2; 

int a2 = 1;
char s2 = 'a';
string str2 ="어벤져스";
double b2 = 1.223123;

int main() {
    // printf는 형식을 지정해서 출력할 때 좋음.
    printf("홍철 %d : 지수 %d\n", a1, b1);  // 홍철 1 : 지수 2

    printf("%.6lf\n", a);   // 1.2345678
    printf("%02d\n", b);    // 12
    printf("%02d\n", c);    // 02

    printf("I'm a 아이언맨 : %d\n", a2);            // I'm a 아이언맨 : 1
    printf("I'm a 아이언맨 : %c\n", s2);            // I'm a 아이언맨 : a
    
    // string 문자열 출력 시 c_str()함수 사용
    // printf를 기반으로 문자열을 출력하려면 string을 문자열에 대한 포인터(char *)타입으로 변경해야하기 때문
    // 그래서 보통 문자열을 출력할 때는 간단히 cout을 사용하는 것
    printf("I'm a 아이언맨 : %s\n", str2.c_str());  // I'm a 아이언맨 : 어벤져스
    printf("I'm a 아이언맨 : %lf\n", b2);           // I'm a 아이언맨 : 1.223123
    return 0;
}