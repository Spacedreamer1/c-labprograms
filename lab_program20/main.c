
#include <stdio.h>
#include <stdlib.h>

int checkpass(float P,float M,float C){
    if(P>=40&&M>=40&&C>=40){
    return 1;
    }
    else{
        return 0;
    }
}
int main(){
    float sub1,sub2,sub3,average;
    printf("enter the marks for 3 subjects");
    if(scanf("%f%f%f",&sub1,&sub2,&sub3)!=3){
        printf("Enter three values\n");
        return 0;
    }
    average=(sub1+sub2+sub3)/3.0;
    printf("\n Average marks:%.2f \n",average);
    if(checkpass(sub1,sub2,sub3)){
            printf("Result:Passed");
    }
    else{
        printf("Result:Failed");
    }
    return 0;
}
