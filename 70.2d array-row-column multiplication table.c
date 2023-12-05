#include<stdio.h>
#define rowcount 5
#define columncount 5
int main()
{
    int row,column,multiply[rowcount][columncount];
    int x,y;

    printf(" SQUARE MULTIPLICATION TABLE \n");
    
    printf("    ");
    for(y=1;y<=columncount;y++)
    printf("%4d",y);
    printf("\n");
    
    printf("____________________________\n");
    
    for(x=0;x<rowcount;x++)
    {
        row=x+1;
        printf("%2d |",row);
    for(y=1;y<=columncount;y++)
    {
        column=y;
        multiply[x][y]=row*column;
        printf("%4d", multiply[x][y]);
    }
    printf("\n");
    }
    return 0;
}
    



