//Accept no from user and it is divisibale by (3 or 5 )or  not

/*
   --------------------------------------------------------
                    OPERATION ||
   --------------------------------------------------------

      Result 1             Result 2               Result 3

   --------------------------------------------------------
      True                 True                    True                    
      True                 False                   True                    
      False                True                    True                             
      False                False                   False                            

   --------------------------------------------------------


*/
#include <stdio.h>
#include <stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo % 3)==0) || ((iNo % 5)==0))
    {
        printf("It is Divisible \n");
    }
    else
    {
        printf("It is not Divisible\n");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}
