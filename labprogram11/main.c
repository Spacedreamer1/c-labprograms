#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[50],branch[50];
    int roll_number,marks;
    printf("Enter your name:-");
    scanf("%s",&name);
    printf("Enter your branch:-");
    scanf("%s",&branch);
    printf("Enter your roll number:-");
    scanf("%d",&roll_number);
    printf("Enter your marks:-");
    scanf("%d",&marks);
    printf("\n your name is %s",name);
    printf("\n your Branch is %s",branch);
    printf("\n your roll number is %d",roll_number);
    printf("\n your marks are %d",marks);
}
