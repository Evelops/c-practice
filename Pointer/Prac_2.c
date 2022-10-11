#include <stdio.h>

// 일반 변수를 swap 하는 함수, 별도의 리턴 타입 X
void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}

// 포인터 값을 입력받아 swap 하는 함수. 
void p_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b =temp;
}

int main()
{
    int a,b;

    a= 10;
    b= 20;

    printf("swap 전 : %d %d \n",a,b);

    swap(a,b);

    printf("swap 후 : %d %d\n",a,b); 
    // swap 이라는 함수를 돌리면 매개변수가 바뀌지 변수에 할당된 값은 변하지 않음.  
    // call by value 형식. 이를 포인터를 활용해서 Call by reference 타입으로 바꾸면 그에 따른 할당된 값도 변경 가능함. 

    printf("p_swap 전 : %d %d\n",a,b);

    p_swap(&a,&b);

    printf("p_swap 후 : %d %d\n",a,b);

    /**
     * 포인터 값을 매개변수로 같는 call by reference 타입의 p_swap 함수를 활용하면, 일반적인 call by value 형식과 다르게 
     * 다음과 같이 주소값이 변경되는 것을 확인 할 수 있다. 
     */

    return 0;
}