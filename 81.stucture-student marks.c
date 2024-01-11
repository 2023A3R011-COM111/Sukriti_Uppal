#include <stdio.h>
struct class
{
    int num;
    char name[20];
    float marks;
};
int main()
{
    int s;
    struct class student1 = {111,"sukriti", 77.11};
    struct class student2 = {222,"ridham", 71.17};
    struct class student3;

    student3 = student2;

    s = ((student3.num == student2.num)&&
         (student3.marks == student2.marks)) ? 1:0;

         if(s == 1)
         {
            printf("student2 and student3 are the same\n\n");
            printf("%d %s %f\n", student3.num, student3.name, student3.marks);
         }else{
            printf("student2 and stydent3 are different\n\n");
         }
         
    return 0;
}