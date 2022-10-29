#include <stdio.h>

typedef struct TEST{
    int n;
    char c;
}test;

int _test(test *p, int length){
    int i;
    if(p == NULL || length < 0){   // 매개변수 체크 로직
    return -1;                        // p가 NULL 이거나 length가 0보다 작으면 -1 을 리턴함
  }    
  for(i=0;i<length;i++){
    p[i].n = i+1;     // p[i].n에 1, 2, 3 대입
    p[i].c = i+65;    // p[i].c에 A, B, C 대입
    printf("%d%c", p[i].n, p[i].c );    // 1A2B3C 출력
  }
return 1;
}

int main(){
    test s[3];
    int ret = 0;
    int len = sizeof(s)/sizeof(s[0]);

    printf("%d\n",sizeof(s));
    printf("%d\n",sizeof(s[0]));
    printf("%d",len);


}