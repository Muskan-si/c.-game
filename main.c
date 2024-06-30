#include<stdio.h>
int main(){
    int a;
    printf("enter the number ");
    scanf("%d",&a);
    if(a>=50){
        printf("our output is correct\n ");
    }
    else if(a<=50&&a>=0){
        printf("your output is wrong \n");
    }
    printf("thankyou for your effort\n");
}