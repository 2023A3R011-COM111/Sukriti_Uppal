#include<stdio.h>
 int main ()
 {
    // Program of list of characters in char datatype

     char singleQuote = '\''; // Single quote character
     printf("Single Quote: %c\n", singleQuote);

    char doubleQuote = '\"'; // Double quote character
     printf("Double Quote: %c\n", doubleQuote);

     char backslash = '\\';// Backslash character
     printf("Backslash: %c\n", backslash);

     char nullChar =  '\0';// Null character
     printf("Null Character: %c\n", nullChar);
    
     char questionMark = '\?';// Question Mark character
     printf("Question Mark: %c\n", questionMark);
     
     char hexvalue = '\x17';// Hexvalue character
     printf("Hex Value: %c\n",hexvalue);

     printf ("Hello\nWorld\n"); // New line (line feed) character

     printf("Tabbed\tHii\tHow\tare\tyou\t\n");// Space of tab- tab character

     printf("Vertical\vTab\vCharacter\vDisplay\n");// Vertical tab character

     printf("remove a\b char\n");// Remove character
    
     printf("Carriage\rReturn\n");// Return character
    
     printf("Form\fFeed\n");// Feed character

     printf("Beep\a\n");// Beep sound character
    
     return 0;
 }

