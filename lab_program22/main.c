#include <stdio.h>
#include <stdlib.h>
void swapBalances(float *a,float *b){
    if (a==NULL || b==NULL){
            return;
    }
    float temp= *a;
    *a=*b;
    *b=temp;
}
int main(void){
    float balance1,balance2;
    printf("Enter balance of Account 1:");
    if(scanf("%f",&balance1)!=1){
            printf("Invalid input,\n");
            return 1;
    }
    printf("Enter the balance of Account 2:");
    if(scanf("%f",&balance2)!=1){
        printf("Invalid input,\n");
        return 1;
    }
    printf("------Before SWAPPING-----\n");
    printf("Account 1 Balance=%.2f\n",balance1);
    printf("account 2 Balance=%.2f\n",balance2);
    swapBalances(&balance1,&balance2);
    printf("------After SWAPING-------\n");
    printf("Account 1 Balance=%.2f\n",balance1);
    printf("Account 2 Balance=%.2f\n",balance2);
    return 0;
}
