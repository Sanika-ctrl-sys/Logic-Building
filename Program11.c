// Write a C program to display numbers from N to 1 in reverse order using a user-defined function.
// Input  : 4
// Output : 4  3  2  1

#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo; iCnt>=1;iCnt--)
    {
       printf("%d\t ",iCnt);
    }

    printf("\n");
}   
int main()
{
    int iValue =0;

    printf("Enter the Frequency:\n");
    scanf("%d",&iValue);
    
    Display(iValue);

    return EXIT_SUCCESS;
}
