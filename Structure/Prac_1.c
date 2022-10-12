#include <stdio.h>

typedef struct {
    int id;
    int age;
} Student;

int main() {
    Student test;
    Student *ptr;

    ptr = &test;
    
    (*ptr).id = 2016;
    (*ptr).age = 25;

    printf("id : %d, age : %d \n", test.id,test.age);

    return 0;
    
}