//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main() {
int length;int c;
int breadth,perimeter;
printf("Enter length and breath of rectangle");
scanf("%d %d",&length,&breadth);
int area = length*breadth;
c=length+breadth;
 perimeter = 2*c;
printf("Area=%d \n Perimeter=%d ",area,perimeter);

return 0;
}