#include <stdio.h>

//구조체 선언.
typedef struct {
    int id;
    int age;
} Student;

int main() {
    Student test;
    Student *ptr; 

    ptr = &test;

    // 구조체 변수를 포인터를 이용하여 값을 대입할 수 있다. 이떄 괄호를 사용하여 대입을 해야함. 
    (*ptr).id = 2016;
    (*ptr).age = 25; 

    printf("id : %d, age : %d \n", test.id,test.age);

    // 매번 괄호를 사용하면 귀찮기 때문에, -> 기호를 사용하여 포인터를 사용해 구조체 변수에 대입할 수 있음.
    ptr->id = 2022;
    ptr->age = 30;

    printf("new id: %d, new age : %d\n", test.id,test.age);

    return 0;
    
}