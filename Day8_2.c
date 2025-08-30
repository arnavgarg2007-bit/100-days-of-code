//Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter Any Three Numbers :");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c)){
        printf("Largest is %d",a);
    } else if ((b>a)&&(b>c)){
        printf("Largest is %d",b);
    }else if ((c>a)&&(c>b)){
        printf("Largest is %d",c);
    } else {
        printf("Enter vaild non Equal Numbers;");
    }
    return 0;
}

