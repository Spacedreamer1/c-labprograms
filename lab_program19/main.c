#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i;
    float x,term,sum;
    printf("Enter the angle in degree");
    scanf("%f",&x);
    printf("Enter the number of terms");
    scanf("%d",&n);
    x=(x*3.14)/180;
    term=x;
    sum=x;
    for(i=1;i<n;i++){
        term=(-term*x*x)/(2*i*(2*i+1));
        sum=sum+term;
    }
    printf("sinx=%.4f \n",sum);
    return 0;
}
