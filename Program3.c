//Write a C program to check whether a given number is even or odd using a user-defined function. The function should return true if the number is even and false if the number is odd. Display the result in the main function

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }

    else
    {
        return false;
    }

}

int main()
{
    int iValue=0;
    bool bRet =false;                  

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("It is Even\n");
    }
    else{
        printf("It is Odd\n");
    }


    return EXIT_SUCCESS;
}
