Write a C program that accepts two integer numbers from the user and calculates their average using a separate function named Average().

#include <stdio.h>
#include <stdlib.h>

float Average(int iNo1 ,int iNo2)
{
    float fAns =0.0f;

    fAns =((float)iNo1+(float)iNo2)/2;

    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fAns=0.0f;

    printf("Enter first number :\n");
    scanf("%d",&iValue1);

    printf("Enter second number :\n");
    scanf("%d",&iValue2);

    fAns=Average(iValue1,iValue2);
    printf("Average number is :%f\n",fAns);

    return EXIT_SUCCESS;
}
