//Accept no from user and Display its all factor

#include <stdio.h>
#include <stdlib.h>

int SumFactors(int iNo)
{
    int iCnt = 0 , iSum =0;

    for(iCnt=1 ; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iSum = iSum + iCnt ;
        }
        return iSum;
    }
}

int main()
{ 
    int iValue=0 , iRet = 0;
    
    printf("Enter number:\n");
    scanf("%d",&iValue);
 
    iRet = SumFactors(iValue);
    printf("Summation of foctor : %d\n",iRet);
    
    return EXIT_SUCCESS;
}

// time Complexity : O(N/2)
