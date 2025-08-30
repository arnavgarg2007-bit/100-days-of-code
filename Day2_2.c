//Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main(){
    int Radius;
    printf("Enter Radius of a circle :");
    scanf("%d",&Radius);
    float Area = 3.14*Radius*Radius;
    float circumference=2*3.14*Radius;
    printf("Area=%f \n Circumference=%f \n",Area,circumference);
    
    return 0;
}

