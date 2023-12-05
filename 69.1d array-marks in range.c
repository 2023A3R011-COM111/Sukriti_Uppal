#include<stdio.h>
#define students 15
#define count 11
int main()
{
    float marks[students];
    int i,low,high;
    int group[count]={0,0,0,0,0,0,0,0,0,0,0};
    
    printf("Enter the marks for %d students\n", students);
    
    for(i=0;i<students;i++)
    {
        printf("Enter matks for student a[%d]:", i+1);
        scanf("%d", &marks[i]);
        ++group[(int)(marks[i])/10];
    }
    printf("\nGROUP\tRANGE\tFREQUENCY\n");
    for(i=0;i<count;i++)
    {
        low=i*10;
        if(i==10)
        high=100;
        else
        high=low+9;
        printf("%2d\t%3d to %3d\t%d\n",i+1,low, high,group[i]);
    }
     return 0;

}