#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,i,n;
    printf("Enter which number table you want:");
    scanf("%d",&a);
    printf("Enter how long do you want the table to be:");
    scanf("%d",&b);
    for(i=1;i<=b;i=i+1){
        n=a*i;
        printf("%d * %d = %d \n",a,i,n);
    }
}
