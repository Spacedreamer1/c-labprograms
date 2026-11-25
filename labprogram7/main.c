#include <stdio.h>
#include <stdlib.h>

int main(){
    float a,b;
    printf("enter the first number:",a,b);
    scanf("%f,%f",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the number are %f,%f",a,b);
    return 0;
}
