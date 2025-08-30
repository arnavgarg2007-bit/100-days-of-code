//Write a program to swap two numbers without using a third variable.

#include<stdio.h>
int main(){
    int a ; int b;
    printf("Enter Two Number : ");
    scanf("%d %d",&a,&b);
    printf("Before swaping a=%d b=%d " "\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swaping a=%d b=%d ",a,b);
    
    return 0;
   
}

