#include <stdio.h>

int main(void){

    int a;
    double b;
    char c;

    printf("int형 변수의 주소: %u\n",&a);
    printf("double형 변수의 주소: %u\n",&b);
    printf("char형 변수의 주소: %u\n",&c);

    return 0;
}

// 각 자료형이 나타내는 변수의 메모리 주소를 확인. 
// & 연산자로 각 변수의 주소를 계산. 