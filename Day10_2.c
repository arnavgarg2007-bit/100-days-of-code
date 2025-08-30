//Write a program to display the day of the week based on a number (1–7) using switch-case.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number (1-7)=");
    scanf("%d",&n);
    switch(n){
        case 1: 
          printf("Monday");
           break;
        case 2:
          printf("Tuesday");
           break;
        case 3:
          printf("Wednesday");
           break;
        case 4:
          printf("Thrusday");
           break;
        case 5:
          printf("Friday");
           break;
        case 6:
          printf("Saturday");
           break;
        case 7:
          printf("Sunday");
           break;  
        default:
           printf("Enter a Vaild num (1-7)");
    }
    
    return 0;
}

