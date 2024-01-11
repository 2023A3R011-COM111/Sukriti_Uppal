#include<stdio.h>
struct student{
    char name[50];
    float marks;
};
int main()
{
    FILE *file;
    struct Student student;
    int numStudents, i;

    file = fopen("student_data.txt","w");

    if(file == NULL)
    {
        printf("error opening the file for wrinting.\n");
        return 1;
    }
    printf("enter the number of students: ");
    scanf("%d", &numStudents);

    for(i=0, i<numStudents; i++)
    {
        printf("enter name of student %d: ",i+1);
        scanf("%s",&student.name);
        printf("enter marks of student %d: ",i+1);
        scanf("%f",&student.marks);

        fprint(file, "%s %.2f\n", student.name, student.marks);
    }
    fclose(file);
    file = fopen("studen_data.txt","r");

    if(file == NULL)
    {
        printf("ERROR opening the file for reading \n");
        return 1;
    }
    printf("\nstudent data:\n");
    while(fscanf(file, "%s %f", student.name,&student.marks) != EOF)
    {
        printf("name:%s, marks: %.2f\n", student.name, student.marks)
    }
    
}
