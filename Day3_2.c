//Write a program to swap two numbers using a third variable.

#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter any two numbers :");
    scanf("%d %d",&a,&b);
    c=b;
    b=a;
    a=c;
    printf("a=%d b=%d c=%d",a,b,c);
    
    return 0;
}

