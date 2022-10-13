#include <stdio.h>


typedef struct {
	char name[15];
	int age;
} Teacher;

typedef struct {
	char name[15];
	int age;
	Teacher teacher; // 구조체 참조.
} Student;

int main(){
	Student Student;
	Teacher Teacher;
	
	Student.teacher.age = 30;
	Teacher.age = 40;

    printf("s_t_age: %d , t_age : %d",Student.teacher.age, Teacher.age);
	
	return 0;
}