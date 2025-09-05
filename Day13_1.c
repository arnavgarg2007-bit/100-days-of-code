//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include<stdio.h>
 int main(){
    int a ; int b ; char x; int y; 
    printf("Enter any two number and operator  :");
    scanf("%d %d %c",&a,&b,&x);
    switch (x) {
        case '+':
              y=a+b;
              printf("%d",y);
              break;
        case '-' :
              y=a-b;
              printf("%d",y);
              break;
        case '*' :
              y=a*b;
              printf("%d",y);
              break;
        case '/' :

              y=a/b;
              printf("%d",y);
              break;
        case '%' :
              y=a%b;
              printf("%d",y);
              break;
        default :
              printf("INVALID INPUT");          

    }
    
    return 0;
 }

