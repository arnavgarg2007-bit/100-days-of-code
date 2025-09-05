//Write a program to print the sum of the first n odd numbers.

#include<stdio.h>
int main() {
    int n , sum=0, count=0 ;int i=1;
    printf("Enter a number :");
    scanf("%d",&n);
    while(count<n){
        if(i%2!=0){ 
           sum=sum+i;
           count++;
        }
        i++;
    }
    printf("%d",sum);
    
    return 0;
}

