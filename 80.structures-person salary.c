#include <stdio.h>
struct data
{
    char name[50];
    char joiningdate[20];
    float salary;
};
int main()
{
    struct data person;

    printf("enter person's name: ");
    scanf("%s", &person.name);
    printf("enter date of joining: ");
    scanf("%s", &person.joiningdate);
    printf("enter salary: ");
    scanf("%f", &person.salary);

    printf("\n Person Information: \n");
    printf("name: %s\n", person.name);
    printf("date of joining: %s\n", person.joiningdate);
    printf("salary: %.2f\n", person.salary);

    return 0;
}