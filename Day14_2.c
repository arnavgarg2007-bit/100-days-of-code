//Write a program to print the product of even numbers from 1 to n.

#include<stdio.h>
int main(){
    int n;int product =1;
    printf("Enter any number :");
    scanf("%d",&n);
    if(n<2){
        printf("No even numbers upto %d",n);
    }
    for(int i=2;i<=n;i+=2){
            
            product=product*i;
            
    } 
    printf("%d",product);
    return 0;
}

