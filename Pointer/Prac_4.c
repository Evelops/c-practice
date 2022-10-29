#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main() {
    
    int i = 0;
    int *p = NULL;
    int *p2 = NULL;

    p = (int *)malloc(sizeof(int)*SIZE); // 포인터 p 에 SIZE 크기만큼 메모리 할당.

    if(p == NULL){
        exit(1);
    }

    for (i=0;i<SIZE;i++){
        p[i]=i*2; 
    }
    p2 = p;
    p2++;

    printf("%d\n",*p2);

    return 0;


}