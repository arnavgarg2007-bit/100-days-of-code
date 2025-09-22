//Write a program to check if a number is a perfect number.

#include<stdio.h>
int main(){
    int n ,temp ,fact,sum=0;
    
    printf("Enter any number :");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if (n%i==0){
            sum=sum+i;
        }
    }
    if (n==sum){
        printf("Perfect Number ");
    } else{
        printf("Not a perfect number ");
    }
}
