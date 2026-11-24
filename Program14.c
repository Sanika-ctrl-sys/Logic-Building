//Accept no from user and it is divisibale by 3 or not

#include <stdio.h>
#include <stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo %3)==0)
    {
        printf("Number is Divisible by 3\n");
    }
    else
    {
        printf("Number is not Divisible by 3\n");
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
