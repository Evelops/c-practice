#include <stdio.h>

int main(void){
    int x =100;
    int y= 200;
     
    int *p;

    p=&x;
    printf("p값 -> %d\n",p);
    printf("*p값 -> %d\n",*p);

    p=&y;

    printf("p값 -> %d\n",p);
    printf("*p값 -> %d\n",*p);

    return 0;

}
// 위 실습과 같이 간단하게 포인터 값을 변경할 수 있다.