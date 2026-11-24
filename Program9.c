// Write a C program to display numbers from 1 to N using a user-defined function.
// Input  : 4
// Output : 1    2    3     4

#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1; iCnt<=iNo;iCnt++)
    {
       printf("%d\t",iCnt);
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
