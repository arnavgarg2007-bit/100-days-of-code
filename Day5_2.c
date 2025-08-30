//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
int main(){
    int sec;
    printf("Enter Time in Seconds :");
    scanf("%d",&sec);

    int hour ; int min ;
    hour = sec/3600;
    sec=sec%3600;
    min = sec/60;
    sec=sec%60;
    printf("%d : %d : %d",hour,min,sec);
    
    return 0;
}

