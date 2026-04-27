#include<stdio.h>
int main(){
    int num;
    printf("enter a year: ");
    scanf("%d", &num);
    if(num % 4 ==0){
        printf("It is a leap year");
    }
    else{
        printf("It is not a leap year");
    }
    return 0;
}