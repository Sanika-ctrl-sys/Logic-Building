//Write a C program to accept a name from the user and print a personalized welcome message.

import java.util.Scanner;

class program5
{
    public static void main(String A[])
    {
        Scanner scanner = null;
        String sName = null;

        scanner = new Scanner(System.in);

        System.out.println("Enter Your name :");
        sName = scanner.next();                            

        System.out.println("Welocome "+sName);
        
    }
}
