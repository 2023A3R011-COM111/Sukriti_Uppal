#include<stdio.h.>
#include<ctype.h>
int main()
{
    char x;
    printf("press any key\n");

    x = getchar();

    if(isalpha(x)>0)
    {
    printf(" it is an alphabet.");
    }
    else if(isdigit(x)>0)
    {
    printf(" it is a digit.");
    }
    else
    {
    printf("invalid input");
    }
    return 0;

    

}