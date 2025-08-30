//Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main(){
    float t_c;
    printf("Enter Temperature in Celsius :");
    scanf("%f",&t_c);
    float t_f = (t_c*9/5)+32;
    printf("Tempereture in Fahrenheit: %f",t_f);
    
    return 0;

}

