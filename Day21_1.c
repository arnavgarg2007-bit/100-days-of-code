//Write a program to swap the first and last digit of a number.

#include <math.h>

int main() 
{
    int num, first, last, digits, pow10, middle, swapped;

    printf("Enter a number: ");
    scanf("%d",&num);

    if (num < 10) 
    {
        printf("Swapped Number: %d\n",num);
        return 0;
    }

    digits = (int)log10(num);      
    pow10 = (int)pow(10, digits);  

    first = num / pow10;           
    last = num % 10;               
    middle = (num % pow10) / 10;   

    swapped = last*pow10 + middle*10 + first ;

    printf("Swapped Number: %d\n",swapped);

    return 0;
}
