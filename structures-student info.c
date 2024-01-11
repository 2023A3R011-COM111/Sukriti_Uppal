#include<stdio.h>
union Rollnumber{
    int Rollnumberr;
};
union Marks {
    float Markss;
};
union Grade{
    char Grades;
};
int main()
{
    union Rollnumber roll;
    union Marks marks;
    union Grade grade;

    printf("Enter roll number: ");
    scanf("%d", &roll.Rollnumberr);

    printf("Enter marks: ");
    scanf("%f", &marks.Markss);

    printf("Enter grade: ");
    scanf(" %c", &grade.Grades);
    
    //display info
    printf("\nstudent information: \n");
    printf("roll number: %d\n", roll.Rollnumberr);
    printf("marks: %.2f\n", marks.Markss);
    printf("grade: %c\n", grade.Grades);

    return 0;
}
