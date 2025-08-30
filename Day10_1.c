//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter three sides of triangle :");
    scanf("%d %d %d",&x,&y,&z);
    if((x==y)&&(y==z)&&(z==x)){
        printf("Equilateral");
    }else if((x==y)||(y==z)||(z==x)){
        printf("Isosecles");
    }else if((x!=y)&&(y!=z)&&(z!=x)){
        printf("Scalene");
    }else {
        printf("Enter vaild");
    }
    
    return 0;
}

