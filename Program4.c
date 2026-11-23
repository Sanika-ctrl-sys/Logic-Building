//Write a C program to accept a name from the user and print a personalized welcome message.

#include <stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];

    printf("Enter your name :\n");
    scanf("%[^'\n']s",sName);          // %[^'\n']s     Accept the input until \n     

    printf("Welocome %s\n",sName);

    return EXIT_SUCCESS;
}
