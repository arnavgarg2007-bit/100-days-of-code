//Write a program to calculate electricity bill based on units consumed with these rates:
//First 100 units at ₹5/unit
//Next 100 units at ₹7/unit
//Next 100 units at ₹10/unit
//Above at ₹12/unit

#include<stdio.h>
int main(){
int units ; int bill;
printf("Enter the number of units you consumed : ");
scanf("%d",&units);
    if(units<=50){ 
        bill=units*5;
        printf("Your bill is : %d",bill);
    }else if((units>50)&&(units<=150)){
        int _units;
        _units=units-50;
        bill=_units*7+250;
        printf("Your bill is : %d",bill);
    }else if ((units>150)&&(units<=250)){
        int units_1 =0;
        units_1=units-150;
        float _bill=units_1*12.5+700+250;
        printf("Your bill is : %f",_bill);
    }else if(units>250){
        int _units;
        _units=units-250;
        bill=_units*10 +700+250;
        printf("Your bill is : %d",bill);
    } else {
        printf(" IVALID INPUT ENTER A POSITIVE INTEGER ");
    }
    
    return 0;

}