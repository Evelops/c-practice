#include <stdio.h>

struct TEST{
    int n;
    char c;

};

struct TEST_2{
    char name[10];
    int age;
};

int main(){

    struct TEST s;
    struct TEST_2 k[] = {"eom",25,"kim",30,"Yun",23,"Park",21};
    struct TEST_2 *p;

    p = k;
    p++;

    printf("%ld\n",sizeof(struct TEST));
    printf("%ld\n",sizeof(s));
    printf("%s\n",p->name);
    printf("%d\n",p->age);

    return 0;
}