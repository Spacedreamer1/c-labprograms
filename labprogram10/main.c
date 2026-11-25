#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    if ((a==b)||(b==c)||(c==a)){
            printf("enter three different numbers");
    }
    else{
            if (a>b){
                    if(a>c){
                            printf("the largest number is %d",a);
                    }else{
                            printf("The largest number is %d",c);
                    }
            }
            else if (b>c){
                    printf("The largest number is %d",b);
            }
            else{
                    printf("The largest number is %d",c);
            }
    }
}
