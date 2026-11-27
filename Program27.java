import java.util.Scanner;

//Display Each Digit of a Number Using Modulus and Division
class Program27
{
    public static void main(String A[])
    {
        int iNo = 175902;

        System.out.println("Number is :"+iNo);    //175902

        System.out.println(iNo % 10);             //2 display
        iNo = iNo/10;                             //17590
        System.out.println("Number is :"+iNo);    //17590


        System.out.println(iNo % 10);             //0 display
        iNo = iNo/10;                             //1759
        System.out.println("Number is :"+iNo);    //1759


        System.out.println(iNo % 10);             //9 display
        iNo = iNo/10;                             //175
        System.out.println("Number is :"+iNo);    //175

        System.out.println(iNo % 10);             //5 display
        iNo =iNo/10;                              //17
        System.out.println("Number is :"+iNo);    //17


    }
}
