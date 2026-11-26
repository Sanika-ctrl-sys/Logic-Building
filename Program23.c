//Accept no from user and Display Perfect Number or not

#include <stdio.h>
#include <stdlib.h>

void CheckjPerfect(int iNo)
{
    int iCnt = 0 , iSum =0;

    for(iCnt=1 ; iCnt <= iNo/2; iCnt++)
    {

        if(iSum == iNo)
        {
            printf("It is Perfect Number\n");
        }
        else
        {
            printf("It is not Perfect Number\n");
        }

        
    }
}

int main()
{ 
    int iValue=0 ;
    
    printf("Enter number:\n");
    scanf("%d",&iValue);
 
    CheckjPerfect(iValue)
   
    return EXIT_SUCCESS;
}

// time Complexity : O(N/2)
