#include<bits/stdc++.h>
using namespace std;
int a;
double b;
char c;

// scanf는 주로 입력형식이 까다롭거나 이를 이용해야할 때 사용
// scanf로 받을 수 있는 타입과 형식
// d -> int
// c -> char 
// s -> string
// lf -> double
//ld -> long long
int main(){
    // int scanf(const char * format, ...);
    scanf("%d %lf %c", &a, &b, &c);
    printf("%d\n", a);
    printf("%lf\n", b);
    printf("%c\n", c);

    return 0;
}
/* 
입력 
23330 
233.23123 
a  
 
출력 
23330 
233.231230 
a 
*/ 