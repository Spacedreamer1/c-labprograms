#include <stdio.h>
#include <stdlib.h>

int main(){
    float unit,unit1,unit2,unit3,unit4,unit5,unit6;
    printf("enter the units consumed:");
    scanf("%f",&unit);
    unit1=(unit-300)*7+300+500+200;
    unit2=(unit-200)*5+300+200;
    unit3=(unit-100)*3+200;
    unit4=(unit)*2;
    unit5=(unit1)/10;
    unit6=unit1+unit5;
    if (unit>100){
            if (unit>200){
                    if (unit>300){
                            if (unit1>2000){
                                    printf("The total bill is %f",unit1);
                                    printf("the supercharged bill is %f",unit5);
                                    printf("Hence the total bill which you have to pay is %f",unit6);
                            }else{
                                printf("the electricity bill is equal to %f",unit1);
                    }}else{
                        printf("the electricity bill is equal to %f",unit2);
                    }
            }else{
                printf("the electricity bill is equal to %f",unit3);
            }
    }
    else{
            printf("the electricity bill is equal to %f",unit4);
    }
}
