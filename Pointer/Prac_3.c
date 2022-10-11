#include <stdio.h>

int main()
{

    /**
     * 배열의 이름은 포인터 변수와 같은 기능을 함. 
     * 첫번째 요소의 주소값을 나타냄. 
     * 아래의 예제와 같이 주소값을 리턴하는 & 연산자 없이 arr 배열의 이름 자체가 주소값이 되기에,
     * 포인터에 바로 대입이 가능함. 
     * ==> 배열의 이름이 주소값.
     */
    int arr[5] = {1,2,3,4,5};
    int *arrPtr = arr;

    printf("%d\n",*arrPtr);
    printf("%d\n",arr[0]);

    double arr2[5] = {1.1,2.2,3.3,4.4,5.5};
    double *arr2Ptr = arr2;

    printf("포인터 주소: %d %d\n",arrPtr++, arr2Ptr++);
    printf("연산 후 포인터 주소: %d %d\n",arrPtr, arr2Ptr);
    printf("연산 후 포인터 주소: %d %.2f\n",*arrPtr, *arr2Ptr);

    arrPtr +=2 ;
    arr2Ptr +=2;
    
    printf("연산 후 포인터 주소: %d %d\n",arrPtr, arr2Ptr);
    printf("연산 후 포인터 주소: %d %.2f\n",*arrPtr, *arr2Ptr);



    return 0;
}