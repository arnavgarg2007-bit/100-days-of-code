//Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
int main() {
    float a ,sp ,cp ,p,loss ;
    printf("Enter cost price and selling prince :");
    scanf("%f %f",&cp,&sp);
    a=sp-cp;
    if(a>0){
        p= (a/cp)*100;
        printf("Profit %f %%",p);

    } else if (a<0){
        loss= -(a/cp)*100;
        printf("Loss %f %%",loss);
    }else if(a==0){
        printf("No Profit No Loss");
    }
    return 0;
}

