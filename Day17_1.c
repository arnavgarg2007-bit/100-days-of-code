//Write a program to check if a number is an Armstrong number.

#include<stdio.h>
int main (){
    int n ,temp,x,amp=0;
    printf("Enter any number :");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        x=n%10;
        amp=amp+x*x*x;
        n=n/10;
    }
    
    if(temp==amp){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
    return 0;
    

}