#include<stdio.h>
void printline(void);
void value(void);
int main()
{
    printline();
    value();
    printline();

    return 0;
}
void printline(void)
{
    int i;
    for (i=1;i<=35;i++)
    printf("%c",'-');
    printf("\n");
}
void value(void)
{
    int year,period;
    float inrate,sum,principal;

    printf("Principal Amount ?: ");
    scanf("%f", &principal);

    printf("Interest Rate ?: ");
    scanf("%f", &inrate);

    printf("Period ?: ");
    scanf("%d", &period);

    sum=principal;
    year=1;

    while(year<=period)
    {
        sum=sum*(1+inrate);
        year=year+1;
    }
    printf("\nSum: %.2f\n",sum);
}

