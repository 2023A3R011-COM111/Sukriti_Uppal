#include<stdio.h>
int main()
{
    char input[100];// adjust size acc. to ur need.
    char ch;
    int i = 0;
    printf("Enter a line of text: \n");
    //read characters until a newline char is entered.
    while((ch=getchar()) != '\n' && i < 99)
    {
        input[i]=ch;
        i++;
    }
    //terminate the string with a null char
    input[i] = '\0';
    //input line of text from the user.
    printf("Entered text: %s\n", input);
    return 0;
}