#include <stdio.h>
#include <stdlib.h>

int main(){
    int year;
    printf("enter the year :");
    scanf("%d",&year);
    if (year<=1000){
            printf("please enter any 4 digit year");
    }
    else{
            if((year%4==0 && year%100!=0) || (year%400==0)){
                    printf("the given year is a leap year");
            }else{
                printf("the give year is not a leap year");
            }
    }
}
