// C program to design a scientific Calculator

//Including the libraries
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//general ops

void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void cube();
void square();
void sqroot();

//trigo functions

void sine();
void cosine();
void tangent();

void isine();
void icosine();
void itangent();

void secant();
void cosecant();
void cotangent();


void isecant();
void icosecant();
void icotangent();

int main()
{
    printf(" ****************** Welcome to SCI Calc *****************  \n");
    int choice;
    printf("\nEnter 0 to exit\t\n");
    printf("Enter 1 for addition\n");
    printf("Enter 2 for subtraction\n");
    printf("Enter 3 for multiplication\n");
    printf("Enter 4 for division\n");
    printf("Enter 5 for modulus\n");
    printf("Enter 6 for factorial\n");
    printf("Enter 7 for power\n");
    printf("Enter 8 for cube\n");
    printf("Enter 9 for square\n");
    printf("Enter 10 for square root\n");
    printf("Enter 11 for sine\n");
    printf("Enter 12 for cosine\n");
    printf("Enter 13 for tangent\n");
    printf("Enter 14 for secant\n");
    printf("Enter 15 for cosecant\n");
    printf("Enter 16 for cotangent\n");
    printf("Enter 17 for sine inverse\n");
    printf("Enter 18 for cosine inverse\n");
    printf("Enter 19 for tangent inverse\n");
    

    printf("SORRY!!!, We can't provide any more options. We are poor developers :( \n");

    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                modulus();
                break;
            case 6:
                factorial();
                break;
            case 7:
                power();
                break;
            case 8:
                cube();
                break;
            case 9:
                square();
                break;
            case 10:
                sqroot();
                break;
            case 11:
                sine();
                break;
            case 12:
                cosine();
                break;
            case 13:
                tangent();
                break;
            case 14:
                secant();
                break;
            case 15:
                cosecant();
                break;
            case 16:
                cotangent();
                break;
            case 17:
                isine();
                break;
            case 18:
                icosine();
                break;
            case 19:
                itangent();
                break;
            
        }
    }
    return 0;
}

//addition
void addition(){
    float a, b;
    printf("Enter the numbers to add: ");
    scanf("%f %f", &a, &b);
    printf("Result = %f", a+b);
}

//subtraction
void subtraction(){
    float a, b;
    printf("Enter the numbers to subtract: ");
    scanf("%f %f", &a, &b);
    printf("Result = %f", a-b);
}

//multiplication
void multiplication(){
    float a, b;
    printf("Enter the numbers to multiply: ");
    scanf("%f %f", &a, &b);
    printf("Result = %f", a*b);
}

// division
void division(){
    float a, b;
    printf("Enter the numbers to divide: ");
    scanf("%f %f", &a, &b);
    printf("Result = %f", a/b);
}

//modulus
void modulus(){
    int a, b;
    printf("Enter the numbers to find remainder: ");
    scanf("%d %d", &a, &b);
    printf("Result = %d", a%b);
}


//factorial
void factorial()
{
    int a, fact = 1, i;
    printf("Enter the number: ");
    scanf("%d", &a);
    for(i = 1; i<= a; i++)
    {
        fact *= i;
    }
    printf("Result = %d", fact);
}

//power
void power()
{
    float a, b;
    printf("Enter the numbers to find power: ");
    scanf("%f %f", &a, &b);
    printf("Result = %f", pow(a,b));
}

//cube
void cube()
{
    float a;
    printf("Enter the number to find cube: ");
    scanf("%f", &a);
    printf("Result = %f", pow(a,3));
}

//square
void square()
{
    float a;
    printf("enter the number to find square: ");
    scanf("%f", &a);
    printf("Result = %f", pow(a,2));
}

//sqroot
void sqroot()
{
    float a;
    printf("Enter the number to find square root: ");
    scanf("%f", &a);
    printf("Result = %f", pow(a, 0.5));
}

//sine
void sine()
{
    float a;
    printf("Enter the angle in radian: ");
    scanf("%f", &a);
    printf("Result = %f", sin(a));
}

//cosine
void cosine()
{
    float a;
    printf("Enter the angle in radian: ");
    scanf("%f", &a);
    printf("Result = %f", cos(a));
}
//---------------------
//tangent
void tangent()
{
    float a;
    printf("Enter the angle in radian: ");
    scanf("%f", &a);
    printf("Result = %f", tan(a));
}


//secant
void secant()
{
    float a;
    printf("Enter the angle in radian: ");
    scanf("%f", &a);
    printf("Result = %f", 1/cos(a));
}


//cosecant
void cosecant()
{
    float a;
    printf("Enter the angle in radian: ");
    scanf("%f", &a);
    printf("Result = %f", 1/sin(a));
}


//cotangent

void cotangent()
{
    float a;
    printf("Enter the angle in radian: ");
    scanf("%f", &a);
    printf("Result = %f", 1/tan(a));
}

//isine
void isine()
{
    float a;
    printf("Enter the angle in radian: ");
    scanf("%f", &a);
    printf("Result = %f", asin(a));
}

//icosine
void icosine()
{
    float a;
    printf("Enter the angle in radian: ");
    scanf("%f", &a);
    printf("Result = %f", acos(a));
}

//itangent
void itangent()
{
    float a;
    printf("Enter the angle in radian: ");
    scanf("%f", &a);
    printf("Result = %f", atan(a));
}



