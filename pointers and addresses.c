#include<stdio.h>
int main()
{
    char a;
    int x;
    float p,q;

    a = 'A';
    x = 125;
    p = 10.25, q = 18.76;

    printf("%c is stored at addr %p.\n", a,(void*)&a);
    printf("%d is stored at addr %p.\n", x,(void*)&x);
    printf("%f is stored at addr %p.\n", p,(void*)&p);
    printf("%d is stored at addr %p.\n", q,(void*)&q);

    //additional functionality
    //modify the values and print the updated values and addresses

    a= 'B';
    x = 456;
    p = 20.34;
    q = 35.67;

    printf ("\n after modification: \n");
    printf("%c is stored at addr %p.\n", a,(void*)&a);
    printf("%d is stored at addr %p.\n", x,(void*)&x);
    printf("%f is stored at addr %p.\n", p,(void*)&p);
    printf("%d is stored at addr %p.\n", q,(void*)&q);

    return 0;

}