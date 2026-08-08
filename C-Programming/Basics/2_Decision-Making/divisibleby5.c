#include<stdio.h>
int main(){
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    if(num % 5 ==0){
        printf("Number Divisible by 5");
    }
    else{
        printf("Number is not Divisible by 5");
    }
    return 0;
}