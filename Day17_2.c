//Write a program to check if a number is prime.

#include<stdio.h>
int main(){
    int n ,count =0; 
    printf("Enter a number :");
    scanf("%d",&n);
    int isprime;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
          count++;
        }
    }
    if(count>=1){
        printf("Not Prime");
    } else{
        printf("Prime");
    }

    return 0;
}