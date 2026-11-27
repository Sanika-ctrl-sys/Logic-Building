//Aceept number from user Check whether number perfect or not

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0 , iSum =0;

    for(iCnt=1 ; iCnt <= iNo/2; iCnt++)
    {

        if((iNo % iCnt)==0)
        {
            iSum = iSum + iCnt;
        }
        return( iSum == iNo);
       
        
    }
}

int main()
{ 
    int iValue=0 ;
    bool bRet = false;
    
    printf("Enter number:\n");
    scanf("%d",&iValue);
 

    if(bRet == true)
    {
        printf("It is Perfect number\n");
    }
    else
    {
        printf("It is not Perfect number\n");
    }
   
    return EXIT_SUCCESS;
}

// time Complexity : O(N/2)
