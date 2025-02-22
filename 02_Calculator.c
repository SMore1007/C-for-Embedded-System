/*
Project Name: Simple Calculator
Author Name:  Sagar More
Description:  

*/

#include<stdio.h>
#include<math.h>

int add( int num1, int num2);
int sub( int num1, int num2);
int mul( int num1, int num2);
int div( int num1, int num2);
int mod( int num1, int num2);
int power( int num1, int num2);

int main()
{
    int choice;
    int Num1, Num2;
    do{
        printf("\n\nWelcome to simple calculator\n");
        printf("Chose one of the following options");
        printf("\n1. add\n2. Substract\n3. Multiply\n4. Divide\n5. Modulus\n6. Power\n7. Exit\n");
    
        printf("Now Enter your choice: ");
        scanf("%d", &choice);
        printf("\n\n\n\n");

        if (choice <= 7 && choice >=1)
        {
            switch (choice)
            {
                case 1:
                    printf("You chosen Addition\n");
                    printf("Enter Number 1: ");
                    scanf("%d", &Num1);
                    printf("\nEnter Number 2: ");
                    scanf("%d", &Num2);
                    int add_result  = add(Num1, Num2);
                    printf(" Addition is: %d", add_result);
                    break;
                case 2:
                    printf("You chosen Subtraction\n");
                    printf("Enter Number 1: ");
                    scanf("%d", &Num1);
                    printf("\nEnter Number 2: ");
                    scanf("%d", &Num2);
                    int sub_result  = sub(Num1, Num2);
                    printf(" Subtraction is: %d", sub_result);
                    break;
                case 3:
                    printf("You chosen Multiplication\n");
                    printf("Enter Number 1: ");
                    scanf("%d", &Num1);
                    printf("\nEnter Number 2: ");
                    scanf("%d", &Num2);
                    int mul_result  = mul(Num1, Num2);
                    printf(" Multiplication is: %d", mul_result);
                    break;
                case 4:
                    printf("You chosen Division\n");
                    printf("Enter Number 1: ");
                    scanf("%d", &Num1);
                    printf("\nEnter Number 2: ");
                    scanf("%d", &Num2);
                    int div_result  = div(Num1, Num2);
                    printf(" Division is: %d", div_result);
                    break;
                case 5:
                    printf("You chosen modulus\n");
                    printf("Enter Number 1: ");
                    scanf("%d", &Num1);
                    printf("\nEnter Number 2: ");
                    scanf("%d", &Num2);
                    int mod_result  = mod(Num1, Num2);
                    printf(" Modulus Result is: %d", mod_result);
                    break;
                case 6:
                    printf("You chosen power\n");
                    printf("Enter Number 1: ");
                    scanf("%d", &Num1);
                    printf("Enter Number 2: ");
                    scanf("%d", &Num2);
                    int pow_result  = power(Num1, Num2);
                    printf(" Power is: %d", pow_result);
                    break;
                // default:
                //     break;
            }
        }
        else if(choice > 7)
        {
            printf("Enter Choice between 1 to 7\n");
        }
        
    }while (choice != 7);
}


int add( int num1, int num2)
{
    return num1 + num2;
}
int sub( int num1, int num2)
{
    if (num1 > num2)
    {
        return num1 - num2;
    }else
    {
        return num2 - num1;
    }
    
}
int mul( int num1, int num2)
{
    return num1 * num2;
}
int div( int num1, int num2)
{
    if (num1 > num2)
    {
        return num1 / num2;
    }else
    {
        return num2 / num1;
    }
    
}
int mod( int num1, int num2)
{
    if (num1 > num2)
    {
        return num1 % num2;
    }else
    {
        return num2 % num1;
    }  
}
int power( int num1, int num2)
{

    return pow(num1, num2);
}