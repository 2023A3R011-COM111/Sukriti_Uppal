#include<stdio.h>
int main()
{
    char input[81],charac;
    int c=0;
    printf("enter text. press<return> at end\n ");
    do
    {
        charac=getchar();
        input[c]=charac;
        c++;
    }
    while(charac != '\n');
    c=c-1;
    input[c]='\0';
    printf("\n %s \n", input);
    return 0;
}