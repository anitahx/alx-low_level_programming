#include <stdio.h>
#include "arithmetic.h"

int main(){
    /* Variable declation */
    int firstNumber, secondNumber;
    int sum, difference, product, modulo;
    float quotient;

    /* Taking input from user and storing it in firstNumber and secondNumber */
    printf("Enter First Number: ");
    scanf("%d", &firstNumber);
    printf("Enter Second Number: ");
    scanf("%d", &secondNumber);

    /* Adding two numbers */
    sum = getSum(firstNumber, secondNumber);
    /* Subtracting two numbers */
    difference = getDifference(firstNumber, secondNumber);
    /* Multiplying two numbers*/
    product = getProduct(firstNumber, secondNumber);
    /* Dividing two numbers */
    quotient = getQuotient(firstNumber, secondNumber);
    /* Remainder when firstNumber is divided by secondNumber*/
    modulo = getModulo(firstNumber, secondNumber);

    printf("\nSum = %d", sum);
    printf("\nDifference  = %d", difference);
    printf("\nMultiplication = %d", product);
    printf("\nDivision = %.3f", quotient);
    printf("\nRemainder = %d", modulo);

   
    return 0;
}

/*
* Function to add two numbers
*/
int getSum(int num1, int num2){
    int sum;
    sum = num1 + num2;
    return sum;
}

/*
* Function to subtract two numbers
*/
int getDifference(int num1, int num2){
    int difference;
    difference = num1 - num2;
    return difference;
}

/*
* Function to multiply two numbers
*/
int getProduct(int num1, int num2){
    int product;
    product = num1 * num2;
    return product;
}

/*
* Function to divide two numbers
*/
float getQuotient(int num1, int num2){
    float quotient;
    quotient = (float)num1 / num2;
    return quotient;
}

/*
 * Function to return remainder when one
 * number is divided by other number
 */
int getModulo(int num1, int num2){
    int modulo;
    modulo = num1 % num2;
    return modulo;
}
