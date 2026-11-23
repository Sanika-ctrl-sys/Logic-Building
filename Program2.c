//Write a C program to accept an integer from the user and check whether the input is valid or invalid using the return value

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int no =0;

    printf("Enter number:\n");
    if(scanf("%d",&no)!=1)
    {
        fprintf(stderr,"Invalid Input");

        return EXIT_FAILURE;
    }

    printf("input is valid");

    return EXIT_SUCCESS;
}
