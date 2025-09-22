//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include<stdio.h> 

int main()
{
    int n , i ; 
    float sum = 1 ;  
    printf("Enter the value if n : "); 
    scanf("%d",&n); 

    for(i = 2 ; i<=n ; i++)
    { 
    sum = sum + (float)(2*i-1)/(2*i) ; 
    }

    printf("sum : %f \n",sum);

    return 0 ; 
}
    
